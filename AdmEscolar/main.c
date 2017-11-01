#include "academico.h"

#define ACADEMICO '0'
#define GERENCIAL '1'
#define PESSOAL '2'

int main()
{
    printf("[0] - modulo academico \n"
           "[1] - modulo gerencial \n"
           "[2] - modulo pessoal \n");
    printf("Selecione o modulo: ");
    char op;
    op = getchar();
    fflush(stdin);
    switch (op)
    {
        case ACADEMICO:
            inicializar_cursos();
            menu_academico();
            break;
    }
    return 0;
}
