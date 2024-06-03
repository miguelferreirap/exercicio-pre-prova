#ifndef REGULAR
#define REGULAR
#include <string>
#include "../funcionario/funcionario.hpp"

using std::string;

class Regular : public Funcionario {
    public :
        Regular(string nome, int id, float salarioBase);
        float calcularSalarioTotal();
        int getId() override;
        string getNome() override;
        float getSalarioBase() override;
};

#endif