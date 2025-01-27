#include <string>
#include <iostream>
#include "veiculo.cpp"
using std::string;
using std::cout;
using std::endl;

class Van : public Veiculo
{
private:
    int passageiros;
public:
    Van(const std::string &marca, const std::string &modelo, int capacidade, int passageiros)
        : Veiculo(marca, modelo, capacidade), passageiros(passageiros)
    {
    }
    void exibirDados() const override
    {
        std::cout << "Van - ";
        Veiculo::exibirDados();
        std::cout << "Passageiros: " << passageiros << "\n";
    }
};