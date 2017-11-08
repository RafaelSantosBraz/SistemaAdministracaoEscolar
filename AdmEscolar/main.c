#include <stdio.h>
#include "academico.h"
#include "compat.h"

#define ACADEMICO '0'
#define GERENCIAL '1'
#define PESSOAL '2'
#define SAIR 's'

int main()
{
    while (1)
    {
        printf("[s] - Sair do programa\n"
               "[0] - modulo academico \n"
               "[1] - modulo gerencial \n"
               "[2] - modulo pessoal \n");
        printf("Selecione o modulo: ");
        char op;
        op = getchar();
        FFLUSH(stdin);

        switch (op)
        {
        case ACADEMICO:
            inicializar_modulo_academico();
            menu_academico();
            break;

        case GERENCIAL:
            break;

        case PESSOAL:
            break;

        case SAIR:
            return;
        }

    }

    return 0;
}
