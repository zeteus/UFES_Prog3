#ifndef _CLIENTE_HPP_
#define _CLIENTE_HPP_

#include <iostream>
#include <string>
#include <ctime>
#include <vector>

#include "pedido.hpp"

using namespace std;

class Cliente { 
    private:    
        string nome;
        tm dataNascimento;
        string RG;
        string CPF;
        string endereco;
        string telefone;
        string email;
        vector <Pedido *> pedidos;


        
    public:
        Cliente(string n, tm dn, string rg, string cpf, string en, string t, string em);
        Cliente();
        ~Cliente();
        
        string getNome();
        void setNome(string nome);

        tm getDataNascimento();
        void setDataNascimento(tm dataNascimento);

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
        
        vector <Pedido *> getPedidos();
        void setPedidos(vector <Pedido *> pedidos);
};

#endif /*_CLIENTE_HPP_*/