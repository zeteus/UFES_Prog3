#ifndef _PEDIDO_HPP_
#define _PEDIDO_HPP_

#include <iostream>
#include <ctime>

class Pedido {
    private:
        float valorTotal;
        Date data;
        string status;
        string formaPgto;
        Cliente cliente;
        Funcionario funcionario;
        static int qtdPedidos;
    
    public:
        Pedido();
        ~Pedido();

        float getValorTotal();
        void setValorTotal(float valorTotal);

        Date getData();
        void setData(Date data);

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