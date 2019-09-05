#ifndef _FUNCIONARIO_HPP_
#define _FUNCIONARIO_HPP_

#include <iostream>
#include <ctime>

class Funcionario {
    private:
        string nome;
        Date dataNascimento;
        string RG;
        string CPF;
        string endereco;
        string telefone;
        string email;
        string matricula;
        
    public:
        Funcionario();
        ~Funcionario();

        string getNome();
        void setNome(string nome);

        Date getDataNascimento();
        void setDataNascimento(Date dataNascimento);

        string getRG();
        void setRG(string RG);

        string getCPF();
        void setCPF(string CPF);

        string getEndereco();
        void setEndereco(string endereco);

        string getTelefone();
        void setTelefone(string telefone);

        string getEmail();
        void setEmail(string email);

        string getMatricula();
        void setMatricula(string matricula);
}

#endif /*_FUNCIONARIO_HPP_*/