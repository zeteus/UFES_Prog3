#ifndef _PEDIDO_HPP_
#define _PEDIDO_HPP_

#include <iostream>
#include <string>
#include <ctime>
#include <vector>

#include "itemdepedido.hpp"

using namespace std;

class Cliente;
class Funcionario;
class ItemDePedido;
class Produto;

class Pedido {
    private:
        float valorTotal;
        tm data;
        string status;
        string formaPgto;
        vector <ItemDePedido *> itensdepedido;
        static int qtdPedidos;
    
    public:
        Pedido(float vt, tm d, string s, string fp, int qp, vector <ItemDePedido *> idp);
        Pedido();
        ~Pedido();
        
        float getValorTotal();
        void setValorTotal(float valorTotal);

        tm getData();
        void setData(tm data);

        string getStatus();
        void setStatus(string status);

        string getFormaPgto();
        void setFormaPgto(string formaPgto);

        int getQtdPedidos();
        void setQtdPedidos(int qtdPedidos);

        vector <ItemDePedido *> getItemDePedidos();
        void setItemDePedidos(vector <ItemDePedido *> itemdepedidos);
};

#endif /*_PEDIDO_HPP_*/