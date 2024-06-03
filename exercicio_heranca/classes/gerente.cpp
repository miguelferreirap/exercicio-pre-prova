#include "./gerente.hpp"

Gerente::Gerente(string nome, int id, float salarioBase,float bonus):bonus(bonus),Funcionario(nome, id, salarioBase){}

string Gerente::getNome(){
    return Funcionario::getNome();
}

int Gerente::getId(){
    return Funcionario::getId();
}

float Gerente::getSalarioBase(){
    return Funcionario::getSalarioBase();
}

float Gerente::calcularSalarioTotal(){
    float salariototal = this->bonus + getSalarioBase();
    return salariototal;
}