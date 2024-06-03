#include "./classes/vertice.cpp"
#include "./classes/grafo.cpp"
#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::endl;

int main(int argc, char const *argv[])
{
    Vertice* v1 = new Vertice(1);
    Vertice* v2 = new Vertice(2);
    Vertice* v3 = new Vertice(3);
    Vertice* v4 = new Vertice(4);
    Vertice* v5 = new Vertice(5);
    vector<int> vertices_adjacentes= {2,5};
    vector<Vertice*> vertices;
    v1 -> incerir_vertices_adjacente(vertices_adjacentes);
    vertices_adjacentes= {1,5};
    v2 -> incerir_vertices_adjacente(vertices_adjacentes);
    vertices_adjacentes= {2,4};
    v3 -> incerir_vertices_adjacente(vertices_adjacentes);
    vertices_adjacentes= {2,5,3};
    v4 -> incerir_vertices_adjacente(vertices_adjacentes);
    vertices_adjacentes= {4,1,2};
    v5 -> incerir_vertices_adjacente(vertices_adjacentes);
    vertices = {v1,v2,v3,v4,v5};
    Grafo grafo (vertices);
    std::cout<<"1 e 2 são adjacentes? "<<grafo.verificar_adjacencia(1,2)<<endl;
    std::cout<<"1 e 4 são adjacentes? "<<grafo.verificar_adjacencia(1,4)<<endl;
    cout << "\n"<< "Vertices adjacentes ao ";
    grafo.print_vertices_adjacentes(5);

    cout << "\n\n" <<"Todos os Vertices";
    cout << "\n" << "\n";
    for (auto i: grafo.vertices){
        i->print_vertices_adjacente();
    }
    return 0;
}
