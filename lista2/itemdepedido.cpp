#include "itemdepedido.hpp"

ItemDePedido::ItemDePedido(int qt, float pv, Pedido pe, Produto pr) {
    ItemDePedido::setPedido(pe);
    ItemDePedido::setProduto(pr);
    ItemDePedido::setQuantidade(qt);
    ItemDePedido::setPrecoVenda(pv);
}

ItemDePedido::ItemDePedido() {
}

ItemDePedido::~ItemDePedido() {
}

Pedido ItemDePedido::getPedido() {
    return this->pedido;
}

void ItemDePedido::setPedido(Pedido pedido) {
    this->pedido = pedido;
}

Produto ItemDePedido::getProduto() {
    return this->produto;
}

void ItemDePedido::setProduto(Produto produto) {
    this->produto = produto;
}

int ItemDePedido::getQuantidade() {
    return this->quantidade;
}

void ItemDePedido::setQuantidade(int quantidade) {
    this->quantidade = quantidade;
}

float ItemDePedido::getPrecoVenda() {
    return this->precoVenda;
}

void ItemDePedido::setPrecoVenda(float precoVenda) {
    this->precoVenda = precoVenda;
}