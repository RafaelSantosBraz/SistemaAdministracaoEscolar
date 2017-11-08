#ifndef CURSO_H_INCLUDED
#define CURSO_H_INCLUDED

#define NOME_TAM 30
#define TURMAS_TAM 5
#define CURSOS_TAM 20

typedef struct
{
    int codigo;
    char nome[NOME_TAM];
    int duracao;
    int turmas[TURMAS_TAM];
} CURSO;

CURSO cursos[CURSOS_TAM];

//protótipos

void inicializar_cursos();
int inserir_curso(int, char*);
void exibir_cursos();
void salvar_cursos();

#endif // CURSO_H_INCLUDED
