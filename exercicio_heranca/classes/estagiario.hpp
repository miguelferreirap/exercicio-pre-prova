#ifndef ESTAGIARIO
#define ESTAGIARIO
#include <string>
#include "../funcionario/funcionario.hpp"

using std::string;

class Estagiario : public Funcionario {
    private:
        float salario_fixo;
    public :
        Estagiario(string nome, int id, float salarioBase,float salario_fixo);
        float calcularSalarioTotal();
        int getId() override;
        string getNome() override;
        float getSalarioBase() override;

};

#endif