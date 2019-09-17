#include "pedido.hpp"

Pedido::Pedido(float vt, tm d, string s, string fp, int qp, vector <ItemDePedido *> idp) {
    Pedido::setQtdPedidos(Pedido::getQtdPedidos() + 1);
    Pedido::setValorTotal(vt);
    Pedido::setData(d);
    Pedido::setStatus(s);
    Pedido::setFormaPgto(fp);
    Pedido::setQtdPedidos(qp);
    Pedido::setItemDePedidos(idp);
}

Pedido::Pedido() {
    Pedido::setQtdPedidos(Pedido::getQtdPedidos() + 1);
}

Pedido::~Pedido() {
    Pedido::setQtdPedidos(Pedido::getQtdPedidos() - 1);
}

float Pedido::getValorTotal() {
    return this->valorTotal;
}

void Pedido::setValorTotal(float valorTotal) {
    this->valorTotal = valorTotal;
}

tm Pedido::getData() {
    return this->data;
}

void Pedido::setData(tm data) {
    this->data = data;
}

string Pedido::getStatus() {
    return this->status;
}

void Pedido::setStatus(string status) {
    this->status = status;
}

string Pedido::getFormaPgto() {
    return this->formaPgto;
}

void Pedido::setFormaPgto(string formaPgto) {
    this->formaPgto = formaPgto;
}

int Pedido::getQtdPedidos() {
    return this->qtdPedidos;
}

void Pedido::setQtdPedidos(int qtdPedidos) {
    this->qtdPedidos = qtdPedidos;
}