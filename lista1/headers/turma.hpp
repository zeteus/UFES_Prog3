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
        Date dtInicio, dtFim;
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
        void setCodigo(int cod){
            this->codigo = cod;
        }

        int getVagas(){
            return this->vagas;
        }
        void setVagas(int vag){
            this->vagas = vag;
        }

        int getVagas(){
            return this->vagas;
        }
        void setVagas(int vag){
            this->vagas = vag;
        }

        int getAno(){
            return this->ano;
        }
        void setAno(int ano){
            this->ano = ano;
        }

        int getSemestre(){
            return this->semestre;
        }
        void setSemestre(int sem){
            this->semestre = sem;
        }

        Date getDtInicio(){
            return this->dtInicio;
        }
        void setDtInicio(Date dtInicio){
            this->dtInicio = dtInicio;
        }

        Date getDtFim(){
            return this->dtFim;
        }
        void setDtFim(Date dtFim){
            this->dtFim = dtFim;
        }
}

#endif /*_TURMA_H_*/