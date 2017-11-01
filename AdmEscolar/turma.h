#ifndef TURMA_H_INCLUDED
#define TURMA_H_INCLUDED

#define MATRICULAS_TAM 100
#define DISCIPLINAS_TAM_T 10

typedef struct
{
    int codigo;
    int matriculas[MATRICULAS_TAM];
    int disciplinas[DISCIPLINAS_TAM_T];
    int codigo_curso;
    int ano;
} TURMA;

//protótipos


#endif // TURMA_H_INCLUDED
