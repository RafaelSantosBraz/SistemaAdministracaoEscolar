#ifndef TURMA_H_INCLUDED
#define TURMA_H_INCLUDED

#define MATRICULAS_TAM 100
#define DISCIPLINAS_TAM_T 10
#define TURMAS_TAM_T 30

typedef struct
{
    int codigo;
    int matriculas[MATRICULAS_TAM];
    int disciplinas[DISCIPLINAS_TAM_T];
    int codigo_curso;
    int ano;
} TURMA;

TURMA turmas[TURMAS_TAM_T];

//protótipos
void inicializar_turmas();
int inserir_turma(int ano, int codigo_curso);
void exibir_turmas();
void salvar_turmas();

#endif // TURMA_H_INCLUDED
