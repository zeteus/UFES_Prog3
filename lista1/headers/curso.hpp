#ifndef _CURSO_H_
#define _CURSO_H_

#include <iostream>
#include <ctime>
#include <string>
#include <vector>

#include "serie.h"

class Curso{
    private:
    /* ATRIBUTOS */
        int codigo;
        string nome;

        Idioma i;
        vector <Serie*> series;
    
    /* METODOS */
    public:
        int getCodigo(){
            return this->codigo;
        }
        void setCodigo(Código c){
            this->codigo = c;
        }

        string getNome(){
            return this->nome;
        }
        void setNome(string n){
            this->nome = n;
        }
}

#endif /*_CURSO_H_*/