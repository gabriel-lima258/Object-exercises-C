#include <iostream>
#include <math.h>

using namespace std;

class Int
{
private:
    int valor;
public:
    void inicializar()
    {
        valor = 0;
    }

    void inicializarComValor(int valorInicial)
    {
        valor = valorInicial;
    }

    void mostrar()
    {
        cout << valor;
    }

    void adicionar(const Int& outroValor)
    {
        valor += outroValor.valor;
    }
};

int main()
{
    Int notIniciado;
    Int iniciado1;
    Int iniciado2;

    iniciado1.inicializarComValor(10);
    iniciado2.inicializarComValor(11);

    notIniciado.adicionar(iniciado1);
    notIniciado.adicionar(iniciado2);

    cout << "Resultado: ";
    notIniciado.mostrar();
    cout << endl;

    return 0;
}
