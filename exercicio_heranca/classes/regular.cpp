#include "./regular.hpp"

Regular::Regular(string nome, int id, float salarioBase):Funcionario(nome, id, salarioBase){}

string Regular::getNome(){
    return Funcionario::getNome();
}

int Regular::getId(){
    return Funcionario::getId();
}

float Regular::getSalarioBase(){
    return Funcionario::getSalarioBase();
}

float Regular::calcularSalarioTotal(){
    return getSalarioBase();
}