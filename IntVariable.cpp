#include <iostream>
#include <math.h>

using namespace std;

class Int
{
private:
    int valor;
public:
    Int() : valor(0) {} // construtor sem argumento

    Int(int valorInicial) : valor(valorInicial) {} // construtor com argumento

    void somar(const Int& valorSoma)
    {
        valor += valorSoma.valor;
    }

    void mostrar()
    {
        cout << valor;
    }

};

int main()
{
    Int notIniciado;
    Int iniciado1(10);
    Int iniciado2(11);

    notIniciado.somar(iniciado1);
    notIniciado.somar(iniciado2);

    cout << "Resultado: ";
    notIniciado.mostrar();
    cout << endl;

    return 0;
}
