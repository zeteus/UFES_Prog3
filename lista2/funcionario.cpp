#include <iostream>
#include <string>
#include <ctime>
#include "funcionario.hpp"

Funcionario::Funcionario(string n, tm dn, string rg, string cpf, string en, string t, string em, string m) {
    Funcionario::setNome(n);
    Funcionario::setDataNascimento(dn);
    Funcionario::setRG(rg);
    Funcionario::setCPF(cpf);
    Funcionario::setEndereco(en);
    Funcionario::setTelefone(t);
    Funcionario::setEmail(em);
    Funcionario::setMatricula(m);
}

Funcionario::Funcionario() {
}

Funcionario::~Funcionario() {
}

string Funcionario::getNome() {
    return this->nome;
}

void Funcionario::setNome(string nome) {
    this->nome = nome;
}

tm Funcionario::getDataNascimento() {
    return this->dataNascimento;
}

void Funcionario::setDataNascimento(tm dataNascimento) {
    this->dataNascimento = dataNascimento;
}

string Funcionario::getRG() {
    return this->RG;
}

void Funcionario::setRG(string RG) {
    this->RG = RG;
}

string Funcionario::getCPF() {
    return this->CPF;
}

void Funcionario::setCPF(string CPF) {
    this->CPF = CPF;
}

string Funcionario::getEndereco() {
    return this->endereco;
}

void Funcionario::setEndereco(string endereco) {
    this->endereco = endereco;
}

string Funcionario::getTelefone() {
    return this->telefone;
}

void Funcionario::setTelefone(string telefone) {
    this->telefone = telefone;
}

string Funcionario::getEmail() {
    return this->email;
}

void Funcionario::setEmail(string email) {
    this->email = email;
}

string Funcionario::getMatricula() {
    return this->matricula;
}

void Funcionario::setMatricula(string matricula) {
    this->matricula = matricula;
}