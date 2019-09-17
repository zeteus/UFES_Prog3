#ifndef _TURMA_H_
#define _TURMA_H_

#include <iostream>
#include <ctime>
#include <string>
#include <vector>

#include "professor.hpp"
#include "horarioaula.hpp"
#include "serie.hpp"
#include "matricula.hpp"

class Turma{
    /* ATRIBUTOS */
    private:
        int codigo, vagas, ano, semestre;
        tm dtInicio, dtFim;
        static int qtdTurmas;
        
        Professor prof;
        HorarioAula horario;
        Serie serie;
        vector <Matricula*> matriculas;
    
    public:
    /* CONSTRUTOR */
        Turma(){
            this->qtdTurmas++;
        }
        /* DESTRUTOR */
        ~Turma(){
            this->qtdTurmas--;
        }

    /* METODOS */
        void alocarProfessor(Professor *p){
            p = new Professor();
        }

        int getCodigo(){
            return this->codigo;
        }
        int setCodigo(int cod){
            this->codigo = cod;
        }
}

#endif /*_TURMA_H_*/