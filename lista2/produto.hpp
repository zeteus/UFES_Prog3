#ifndef _PRODUTO_HPP_
#define _PRODUTO_HPP_

#include <iostream>
#include <ctime>
#include <string>

using namespace std;

class Produto {
    private:
        int codigo;
        string nome;
        string descricao;
        int quantidadeEstoque;
        float precoBase;
        static int qtdProdutos;
    
    public:
        Produto(int c, string n, string d, int qe, float pb);
        Produto();
        ~Produto();

        int getCodigo();
        void setCodigo(int codigo);

        string getNome();
        void setNome(string nome);

        string getDescricao();
        void setDescricao(string descricao);

        int getQuantidadeEstoque();
        void setQuantidadeEstoque(int quantidadeEstoque);

        float getPrecoBase();
        void setPrecoBase(float precoBase);
}

#endif /*_PRODUTO_HPP_*/