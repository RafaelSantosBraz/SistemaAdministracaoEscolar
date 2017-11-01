#ifndef CURSO_H_INCLUDED
#define CURSO_H_INCLUDED

#define NOME_TAM 30
#define TURMAS_TAM 5

typedef struct
{
    int codigo;
    char nome[NOME_TAM];
    int duracao;
    int turmas[TURMAS_TAM];
} CURSO;

//protótipos


#endif // CURSO_H_INCLUDED
