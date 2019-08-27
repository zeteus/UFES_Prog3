#ifndef _TURMA_H_
#define _TURMA_H_

#include <iostream>
#include <ctime>
#include <string>
#include <vector>

#include "professor.h"
#include "horarioaula.h"
#include "serie.h"
#include "matricula.h"

class Turma{
    /* ATRIBUTOS */
    private:
        int código, vagas, ano, semestre;
        Date dtInicio, dtFim;
        static int qtdTurmas;
        
        Professor prof;
        HorarioAula horario;
        Serie serie;
        vector <Matricula*> matriculas;
    
    public:
    /* METODOS */
        void alocarProfessor(Professor *p){
            p = new Professor();
        }
}

#endif /*_TURMA_H_*/