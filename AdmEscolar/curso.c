#include <stdio.h>
#include "curso.h"
#include <string.h>

void inicializar_cursos()
{
    FILE *arquivo_cursos;

    if ( (arquivo_cursos = fopen("cursos.dat", "r")) == NULL )
    {
        arquivo_cursos = fopen("cursos.dat", "w+");
        int c;
        for (c = 0; c < CURSOS_TAM; c++)
        {
            cursos[c].codigo = -1;
            cursos[c].duracao = -1;
            cursos[c].nome[0] = '\0';
            int i;
            for (i = 0; i < TURMAS_TAM; i++)
            {
                cursos[c].turmas[i] = -1;
            }
        }
        fwrite(cursos, sizeof(CURSO), CURSOS_TAM, arquivo_cursos);
    }
    else
    {
        puts("Carregando cursos..");
        fread(cursos, sizeof(CURSO), CURSOS_TAM, arquivo_cursos);
    }
    fclose(arquivo_cursos);
}

int inserir_curso(int duracao, char *nome)
{

    int c;
    for (c = 0; c < CURSOS_TAM; c++)
    {
        if (cursos[c].codigo == -1)
        {
            cursos[c].codigo = c;
            cursos[c].duracao = duracao;
            strcpy(cursos[c].nome, nome);
            return 1;
        }
    }
    return 0;
}

void exibir_cursos()
{
    int c;
    for (c = 0; c < CURSOS_TAM; c++)
    {
        if (cursos[c].codigo != -1)
        {
            printf("\tNome: %s; Duracao: %d\n", cursos[c].nome, cursos[c].duracao);
        }
    }
}

void salvar_cursos()
{
    FILE *arquivo_cursos = fopen("cursos.dat", "w");
    fwrite(cursos, sizeof(CURSO), CURSOS_TAM, arquivo_cursos);
    fclose(arquivo_cursos);
}
