#include "academico.h"
#include <strings.h>
#define EXIBIR_CURSOS '0'
#define INSERIR_CURSO '1'
#define SAIR 's'

void inicializar_modulo_academico()
{
    inicializar_cursos();
}

void menu_academico()
{
    while (1)
    {
        printf("[0] - exibir cursos \n"
               "[1] - inserir curso \n");
        printf("Selecione a funcao: ");
        char op;
        op = getchar();
        fflush(stdin);
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
                    inserir_curso(duracao, buffer);
                    memset(buffer, 0, 50);
                    break;
                }
            case SAIR:
                return;
        }

    }
}
