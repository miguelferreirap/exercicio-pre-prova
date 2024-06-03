#ifndef FUNCIONARIO
#define FUNCIONARIO
#include <string>
using std::string;

class Funcionario {
    private:
        string nome;
        int id;
        float salarioBase;
    public:
     Funcionario(string nome, int id, float salarioBase);
     virtual int getId();
     virtual string getNome();
     virtual float getSalarioBase();
};

#endif