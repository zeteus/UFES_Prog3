#include <iostream>
#include <string>
#include <ctime>
#include "cliente.hpp"

Cliente::Cliente(string n, tm dn, string rg, string cpf, string en, string t, string em) {
    Cliente::setNome(n);
    Cliente::setDataNascimento(dn);
    Cliente::setRG(rg);
    Cliente::setCPF(cpf);
    Cliente::setEndereco(en);
    Cliente::setTelefone(t);
    Cliente::setEmail(em);
}

Cliente::Cliente() {
}

Cliente::~Cliente() {
}

string Cliente::getNome() {
    return this->nome;
}

void Cliente::setNome(string nome) {
    this->nome = nome;
}

tm Cliente::getDataNascimento() {
    return this->dataNascimento;
}

void Cliente::setDataNascimento(tm dataNascimento) {
    this->dataNascimento = dataNascimento;
}

string Cliente::getRG() {
    return this->RG;
}

void Cliente::setRG(string RG) {
    this->RG = RG;
}

string Cliente::getCPF() {
    return this->CPF;
}

void Cliente::setCPF(string CPF) {
    this->CPF = CPF;
}

string Cliente::getEndereco() {
    return this->endereco;
}

void Cliente::setEndereco(string endereco) {
    this->endereco = endereco;
}

string Cliente::getTelefone() {
    return this->telefone;
}

void Cliente::setTelefone(string telefone) {
    this->telefone = telefone;
}

string Cliente::getEmail() {
    return this->email;
}

void Cliente::setEmail(string email) {
    this->email = email;
}

vector <Pedido *> Cliente::getPedidos() {
    return this->pedidos;
}

void Cliente::setPedidos(vector <Pedido *> pedidos) {
    this->pedidos = pedidos;
}