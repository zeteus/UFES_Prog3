#ifndef _ALUNO_H_
#define _ALUNO_H_

#include <iostream>
#include <ctime>
#include <string>
#include <vector>

#include "matricula.hpp"

class Aluno{
    /* ATRIBUTOS */
    private:
        int codigo;
        String matriculaInstituicao, CPF, RG, endereco, telefone, email, nome;
        
        vector <Matricula*> matriculas;

    public:    
        static int qtdAlunos;
        
    /* METODOS */
        void matricula(Turma *tm){
            this->t = tm;
        }
}

#endif /*_ALUNO_H_*/