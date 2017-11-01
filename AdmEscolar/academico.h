#ifndef ACADEMICO_H_INCLUDED
#define ACADEMICO_H_INCLUDED

#define BUFFER_TAM 50

#include <stdio.h>
#include <stdlib.h>

#include "aluno.h"
#include "cargo.h"
#include "curso.h"
#include "diretor.h"
#include "disciplina.h"
#include "funcionario.h"
#include "horario.h"
#include "matricula.h"
#include "professor.h"
#include "turma.h"

char buffer[BUFFER_TAM];

//prototipos

void inicializar_modulo_academico();
void menu_academico();

#endif // ACADEMICO_H_INCLUDED
