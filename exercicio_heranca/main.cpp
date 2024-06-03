#include <iostream>
#include "./classes/estagiario.hpp"
#include "./classes/gerente.hpp"
#include "./classes/regular.hpp"

using std::cout;
using std::endl;

int main (){
    Regular regular1 ("Regular1",1,2000.00);
    Gerente gerente1 ("Gerente1",2,2000.00,2500.00);
    Estagiario estagiario1("Estagiario1",3,2000,1550.00);

    cout << regular1.calcularSalarioTotal() << endl ;
    cout << gerente1.calcularSalarioTotal() << endl ;
    cout << estagiario1.calcularSalarioTotal() << endl ;

}