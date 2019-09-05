#ifndef _CLIENTE_HPP_
#define _CLIENTE_HPP_

#include <iostream>
#include <ctime>

class Cliente { 
    private:    
        string nome;
        Date dataNascimento;
        string RG;
        string CPF;
        string endereco;
        string telefone;
        string email;
        
    public:    
        Cliente();
        ~Cliente();
        
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
}

#endif /*_CLIENTE_HPP_*/