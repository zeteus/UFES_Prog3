#include <iostream>
#include <string>
#include <ctime>
#include <vector>

#include "cliente.hpp"
#include "funcionario.hpp"
#include "itemdepedido.hpp"
#include "pedido.hpp"
#include "produto.hpp"

using namespace std;

int main() {

    string n = "Ezequiel";
    vector <Pedido *> vPedidos;

    Funcionario *f;
    f = new Funcionario();
    f->Funcionario::setNome(n);
    cout << f->Funcionario::getNome() << endl;
    delete f;

    return 0;
}