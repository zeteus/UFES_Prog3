#ifndef _SERIE_H_
#define _SERIE_H_

#include <iostream>
#include <ctime>
#include <string>
#include <vector>

#include "curso.h"
#include "turma.h"

class Serie{
    /* ATRIBUTOS */
    private:
        int codigo;
        string nome;


        Curso curso;
        vector <Serie*> prerequisito;
        vector <Turma*> turmas;
    /* METODOS */
}

#endif /*_SERIE_H_*/