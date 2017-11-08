#include <stdio.h>
#include "turma.h"
#include "curso.h"

extern CURSO cursos[CURSOS_TAM];

void inicializar_turmas()
{
    FILE *arquivo_turmas;

    if ( (arquivo_turmas = fopen("turmas.dat", "r")) == NULL )
    {
        arquivo_turmas = fopen("turmas.dat", "w+");
        int c;
        for (c = 0; c < TURMAS_TAM_T; c++)
        {
            turmas[c].codigo = -1;
            turmas[c].ano = -1;

            int i;
            for (i = 0; i < DISCIPLINAS_TAM_T; i++)
            {
                turmas[c].disciplinas[i] = -1;
            }
            for (i = 0; i < MATRICULAS_TAM; i++)
            {
                turmas[c].matriculas[i] = -1;
            }
        }
        fwrite(turmas, sizeof(TURMA), TURMAS_TAM_T, arquivo_turmas);
    }
    else
    {
        puts("Carregando turmas..");
        fread(turmas, sizeof(TURMA), TURMAS_TAM_T, arquivo_turmas);
    }
    fclose(arquivo_turmas);
}

int inserir_turma(int ano, int codigo_curso)
{
    int c;
    for (c = 0; c < TURMAS_TAM_T; c++)
    {
        if (turmas[c].codigo == -1)
        {
            turmas[c].codigo = c;
            turmas[c].ano = ano;
            turmas[c].codigo_curso = codigo_curso;
            return 1;
        }
    }
    return 0;
}

void exibir_turmas()
{
    int c;
    for (c = 0; c < TURMAS_TAM_T; c++)
    {
        if (turmas[c].codigo != -1)
        {
            printf("[%d] Ano: %d; Curso: %s\n", turmas[c].codigo, turmas[c].ano, cursos[turmas[c].codigo_curso].nome);
        }
    }
}
