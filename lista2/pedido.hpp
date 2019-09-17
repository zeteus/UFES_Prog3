#ifndef _PEDIDO_HPP_
#define _PEDIDO_HPP_

#include <iostream>
#include <string>
#include <ctime>

class Pedido {
    private:
        float valorTotal;
        tm data;
        string status;
        string formaPgto;
        Cliente cliente;
        Funcionario funcionario;
        static int qtdPedidos;
    
    public:
        Pedido(float vt, tm d, string s, string fp, int qp, Cliente c, Funcionario f);
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

        Cliente getCliente();
	    void setCliente(Cliente cliente);

        Funcionario getFuncionario();
	    void setFuncionario(Funcionario funcionario);
}

#endif /*_PEDIDO_HPP_*/