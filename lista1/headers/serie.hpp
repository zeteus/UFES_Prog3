#ifndef _SERIE_H_
#define _SERIE_H_

#include <iostream>
#include <ctime>
#include <string>
#include <vector>

#include "curso.hpp"
#include "turma.hpp"

class Serie{
    /* ATRIBUTOS */
    private:
        int codigo;
        string nome;


        Curso curso;
        vector <Serie*> prerequisito;
        vector <Turma*> turmas;
    /* METODOS */
    public:
        int getCodigo(){
            return this->codigo;
        }
        void setCodigo(int cod){
            this->codigo = cod;
        }

        string getNome(){
            return this->Nome;
        }
        void setNome(string nome){
            this->nome = nome;
        }

        Curso getCurso(){
            return this->Nome;
        }
        void setNome(string nome){
            this->nome = nome;
        }
}

#endif /*_SERIE_H_*/