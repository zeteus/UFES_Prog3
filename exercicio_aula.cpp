#include <iostream>
#include <vector>

class Pessoa{
    public:
        int telefone;
        std::string nome;

        Pessoa(std::string _nome, int _tel){
            this->telefone = _tel;
            this->nome = _nome;
        }

        ~Pessoa(){ 
        }
        
        void imprimeTelefone(){
            std::cout << this->telefone << std::endl;
        }

        void imprimePessoa(){
            std::cout << this->nome << std::endl;
        }
};

int main(){
    std::vector<Pessoa*> vPessoas;

    std::string name;
    int tel;
    std::cin >> name;
    std::cin >> tel;
    Pessoa * p1 = new Pessoa(name, tel);
    std::cin >> name;
    std::cin >> tel;
    Pessoa * p2 = new Pessoa(name, tel);
    std::cin >> name;
    std::cin >> tel;
    Pessoa * p3 = new Pessoa(name, tel);

    vPessoas.insert(vPessoas.begin(), p1);
    vPessoas.insert(vPessoas.begin()+1, p2);
    vPessoas.insert(vPessoas.begin()+2, p3);

    for(int c = 0; c < vPessoas.size(); c++){
        std::cout << "Pessoa " << c << ": ";
        vPessoas[c]->imprimePessoa();
    }

    int num = vPessoas.size();
    for(int c = 0; c < num; c++){
        delete vPessoas[c];
    }
}