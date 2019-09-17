#ifndef _MATRICULA_H_
#define _MATRICULA_H_

#include <iostream>
#include <ctime>
#include <string>

#include "aluno.hpp"
#include "turma.hpp"

class Matricula{
    /* ATRIBUTOS */
    private:
        int codigo, nota;
        string situacao;
        
        tm diaMatricula;
        Aluno a;
        Turma t;
    /* METODOS */
    
}

#endif /*_MATRICULA_H_*/