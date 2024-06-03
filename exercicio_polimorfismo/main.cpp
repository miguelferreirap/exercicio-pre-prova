#include "./veiculos/veiculo.cpp"
#include "./veiculos/van.cpp"
#include "./veiculos/caminhao.cpp"
#include <vector>
using std::vector;

int main()
{
    Caminhao *caminhao1 = new Caminhao("volvo", "volvo1", 40, 6);
    Caminhao *caminhao2 = new Caminhao("mercedez", "mercedez", 50, 7);
    Caminhao *caminhao3 = new Caminhao("vw", "vw1", 60, 8);
    Van *van1 = new Van("scania", "scania1", 2, 10);
    Van *van2 = new Van("fiar", "fiat1", 3, 20);
    Van *van3 = new Van("volw", "volw1", 4, 30);

    vector<Veiculo *> veiculos;

    veiculos.push_back(caminhao1);
    veiculos.push_back(caminhao2);
    veiculos.push_back(caminhao3);
    veiculos.push_back(van1);
    veiculos.push_back(van2);
    veiculos.push_back(van3);

    for (auto i : veiculos)
    {
        i->exibirDados();
    }
}