#ifndef _ITEM_DE_PEDIDO_HPP_
#define _ITEM_DE_PEDIDO_HPP_

#include <iostream>
#include <ctime>
#include "pedido.hpp"
#include "produto.hpp"

using namespace std;

class ItemDePedido {
    private:
        int quantidade;
        float precoVenda;
        Pedido pedido;
        Produto produto;

    public:
        ItemDePedido(int qt, float pv, Pedido pe, Produto pr);
        ItemDePedido();
        ~ItemDePedido();

        Pedido getPedido();
        void setPedido(Pedido pedido);
        
        Produto getProduto();
        void setProduto(Produto produto);
        
        int getQuantidade();
        void setQuantidade(int quantidade);

        float getPrecoVenda();
        void setPrecoVenda(float precoVenda);
};

#endif /*_ITEM_DE_PEDIDO_HPP_*/