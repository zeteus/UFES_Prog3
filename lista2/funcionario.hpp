#ifndef _FUNCIONARIO_HPP_
#define _FUNCIONARIO_HPP_

#include <iostream>
#include <string>
#include <ctime>
#include <vector>

#include "pedido.hpp"

using namespace std;

class Cliente;
class ItemDePedido;
class Pedido;
class Produto;

class Funcionario {
    private:
        string nome;
        tm dataNascimento;
        string RG;
        string CPF;
        string endereco;
        string telefone;
        string email;
        string matricula;
        vector <Pedido *> pedidos;
        
    public:
        Funcionario(string n, tm dn, string rg, string cpf, string en, string t, string em, string m);
        Funcionario();
        ~Funcionario();

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

        string getMatricula();
        void setMatricula(string matricula);

        vector <Pedido *> getPedidos();
        void setPedidos(vector <Pedido *> pedidos);
};

#endif /*_FUNCIONARIO_HPP_*/