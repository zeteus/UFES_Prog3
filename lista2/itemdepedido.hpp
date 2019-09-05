#ifndef _ITEM_DE_PEDIDO_HPP_
#define _ITEM_DE_PEDIDO_HPP_

#include <iostream>
#include <ctime>

class ItemDePedido {
    private:
        int quantidade;
        float precoVenda;
        Pedido pedido;
        Produto produto;

    public:
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
}

#endif /*_ITEM_DE_PEDIDO_HPP_*/