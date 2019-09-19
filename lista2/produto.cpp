#include "produto.hpp"

int Produto::qtdProdutos = 0;

Produto::Produto(int c, string n, string d, int qe, float pb) { 
    Produto::setQtdProdutos(Produto::getQtdProdutos() + 1);
    Produto::setCodigo(c);
    Produto::setNome(n);
    Produto::setDescricao(d);
    Produto::setQuantidadeEstoque(qe);
    Produto::setPrecoBase(pb);
}

Produto::Produto() {
    Produto::setQtdProdutos(Produto::getQtdProdutos() + 1);
}

Produto::~Produto() {
    Produto::setQtdProdutos(Produto::getQtdProdutos() - 1);
}

int Produto::getCodigo() {
    return this->codigo;
}

void Produto::setCodigo(int codigo) {
    this->codigo = codigo;
}

string Produto::getNome() {
    return this->nome;
}

void Produto::setNome(string nome) {
    this->nome = nome;
}

string Produto::getDescricao() {
    return this->descricao;
}

void Produto::setDescricao(string descricao) {
    this->descricao = descricao;
}

int Produto::getQuantidadeEstoque() {
    return this->quantidadeEstoque;
}

void Produto::setQuantidadeEstoque(int quantidadeEstoque) {
    this->quantidadeEstoque = quantidadeEstoque;
}

float Produto::getPrecoBase() {
    return this->precoBase;
}

void Produto::setPrecoBase(float precoBase) {
    this->precoBase = precoBase;
}

int Produto::getQtdProdutos() {
    return Produto::qtdProdutos;
}

void Produto::setQtdProdutos(int qtdProdutos) {
    Produto::qtdProdutos = qtdProdutos;
}