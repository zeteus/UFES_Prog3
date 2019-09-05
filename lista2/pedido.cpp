#include "pedido.hpp"

Pedido::Pedido() {
    Pedido::setQtdPedidos(Pedido::getQtdPedidos() + 1);
}

Pedido::~Pedido() {
    Pedido::setQtdPedidos(Pedido::getQtdPedidos() - 1);
}

float Pedido::getValorTotal() {
    return this.valorTotal;
}

void Pedido::setValorTotal(float valorTotal) {
    this.valorTotal = valorTotal;
}

Date Pedido::getData() {
    return this.data;
}

void Pedido::setData(Date data) {
    this.data = data;
}

string Pedido::getStatus() {
    return this.status;
}

void Pedido::setStatus(string status) {
    this.status = status;
}

string Pedido::getFormaPgto() {
    return this.formaPgto;
}

void Pedido::setFormaPgto(string formaPgto) {
    this.formaPgto = formaPgto;
}

int Pedido::getQtdPedidos() {
    return this.qtdPedidos;
}

void Pedido::setQtdPedidos(int qtdPedidos) {
    this.qtdPedidos = qtdPedidos;
}

Cliente Pedido::getCliente() {
	return this.cliente;
}

void Pedido::setCliente(Cliente cliente) {
    this.cliente = cliente;
}

Funcionario Pedido::getFuncionario() {
    return this.funcionario;
}

void Pedido::setFuncionario(Funcionario funcionario) {
    this.funcionario = funcionario;
}