#ifndef DISCIPLINA_H_INCLUDED
#define DISCIPLINA_H_INCLUDED

#define NOME_TAM 30

typedef struct
{
    int codigo;
    int carga_horaria;
    int codigo_professor;
    char nome[NOME_TAM];
    int codigo_horario;
    int codigo_turma;
} DISCIPLINA;

//protótipos


#endif // DISCIPLINA_H_INCLUDED
