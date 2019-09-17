#ifndef _PROFESSOR_H_
#define _PROFESSOR_H_

#include <iostream>
#include <ctime>
#include <string>
#include <vector>

#include "turma.hpp"

class Professor{
    /* ATRIBUTOS */
    private:
        tm dataAdmissao, dataDemissao;
        string CPF, RG, endereco, telefone, email, nome;
        static int qtdProfessores = 0;
        
        vector <Turma*> turmas;

    /* METODOS */
        void setProfessor(Professor *p){
            this->prof = p;
        }

    public:
        /* CONSTRUTOR */
        Professor(){
            this->qtdProfessores++;
        }
        /* DESTRUTOR */
        ~Professor(){
            this->qtdProfessores--;
        }

        tm getDataAdmissao(){
            return this->dataAdmissao;
        }
        void setDataAdmissao(tm data){
            this->dataAdmissao = data;
        }

        tm getDataDemissao(){
            return this->dataDemissao;
        }
        void setDataDemissao(tm data){
            this->dataDemissao = data;
        }

        string getCPF(){
            return this->CPF;
        }
        void setCPF(string cpf){
            this->CPF = cpf;
        }

        string getRG(){
            return this->RG;
        }
        void setRG(string rg){
            this->RG = rg;
        }

        string getEndereco(){
            return this->endereco;
        }
        void setEndereco(string end){
            this->endereco = end;
        }

        string getTelefone(){
            return this->Telefone;
        }
        void setTelefone(string tel){
            this->Telefone = tel;
        }

        string getEmail(){
            return this->Email;
        }
        void setEmail(string email){
            this->email = email;
        }

        string getNome(){
            return this->Nome;
        }
        void setNome(string nome){
            this->nome = nome;
        }
}

#endif /*_PROFESSOR_H_*/