#include <stdio.h>
#include <strings.h>
#include "academico.h"
#include "compat.h"

#define EXIBIR_CURSOS '0'
#define INSERIR_CURSO '1'
#define EXIBIR_TURMAS '2'
#define INSERIR_TURMA '3'
#define SAIR 's'

void inicializar_modulo_academico()
{
    inicializar_cursos();
    inicializar_turmas();
}

    void menu_academico()
    {
        while (1)
        {
            printf("[s] - Retornar ao menu principal\n"
                   "[0] - exibir cursos \n"
                   "[1] - inserir curso \n"
                   "[2] - exibir turmas \n"
                   "[3] - inserir turma \n");
            printf("Selecione a funcao: ");
            char op;
            op = getchar();
            FFLUSH(stdin);
            switch (op)
            {
            case EXIBIR_CURSOS:
                exibir_cursos();
                break;
            case INSERIR_CURSO:
            {
                int duracao;
                printf("Nome do curso: ");
                fgets(buffer, NOME_TAM, stdin);
                printf("Duracao do curso: ");
                scanf("%d", &duracao);
                FFLUSH(stdin);
                inserir_curso(duracao, buffer);
                memset(buffer, 0, 50);
                break;
            }

            case EXIBIR_TURMAS:
                exibir_turmas();
                break;

            case INSERIR_TURMA:
            {
                int ano, codigo_curso;
                printf("Ano da turma: ");
                scanf("%d", &ano);
                printf("Codigo do curso: ");
                scanf("%d", &codigo_curso);
                inserir_turma(ano, codigo_curso);
                memset(buffer, 0, 50);
                break;
            }
            case SAIR:
                puts("Salvando cursos...");

                salvar_cursos();
                return;
            }

        }
    }
