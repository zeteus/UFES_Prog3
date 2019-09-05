#include "itemdepedido.hpp"

ItemDePedido() {
}

~ItemDePedido() {
}

Pedido getPedido() {
    return this.pedido;
}

void setPedido(Pedido pedido) {
    this.pedido = pedido;
}

Produto getProduto() {
    return this.produto;
}

void setProduto(Produto produto) {
    this.produto = produto;
}

int getQuantidade() {
    return this.quantidade;
}

void setQuantidade(int quantidade) {
    this.quantidade = quantidade;
}

float getPrecoVenda() {
    return this.precoVenda;
}

void setPrecoVenda(float precoVenda) {
    this.precoVenda = precoVenda;
}