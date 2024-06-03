#include "./estagiario.hpp"

Estagiario::Estagiario(string nome, int id, float salarioBase,float salario_fixo):salario_fixo(salario_fixo),Funcionario(nome, id, salarioBase){}

string Estagiario::getNome(){
    return Funcionario::getNome();
}

int Estagiario::getId(){
    return Funcionario::getId();
}

float Estagiario::getSalarioBase(){
    return Funcionario::getSalarioBase();
}

float Estagiario::calcularSalarioTotal(){
    return this->salario_fixo;
}