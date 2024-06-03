#include "./funcionario.hpp"

Funcionario::Funcionario(string nome, int id, float salarioBase): nome(nome),id(id),salarioBase(salarioBase){}

string Funcionario::getNome(){
    return this->nome;
}

int Funcionario::getId(){
    return this->id;
}

float Funcionario::getSalarioBase(){
    return this->salarioBase;
}