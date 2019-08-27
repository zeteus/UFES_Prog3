#ifndef _HORARIOAULA_H_
#define _HORARIOAULA_H_

#include <iostream>
#include <ctime>
#include <string>
#include <vector>

#include "turma.h"

class HorarioAula{
    /* ATRIBUTOS */
    private:
        int codigo;
        string diaSemana;
        Time HorarioFim, HorarioInicio;
        
        vector <Turma*> turmas;
    /* METODOS */
}

#endif /*_HORARIOAULA_H_*/