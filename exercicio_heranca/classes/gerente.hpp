#ifndef GERENTE
#define GERENTE
#include <string>
#include "../funcionario/funcionario.hpp"

using std::string;

class Gerente : public Funcionario {
    private:
        float bonus;
    public :
        Gerente(string nome, int id, float salarioBase,float bonus);
        float calcularSalarioTotal();
        int getId() override;
        string getNome() override;
        float getSalarioBase() override;
};

#endif