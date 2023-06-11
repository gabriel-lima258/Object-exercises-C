#include <iostream>
#include <cstring>

using namespace std;

class Modelo
{
private:
    int inteiro;
    double real;

public:
    void le_dados()
    {
       cout << "Digite um valor inteiro: ";
       cin >> inteiro;

       cout << "Digite um valor real: ";
       cin >> real;
    }

    void escreve_dados();

    void triplicar_membros()
    {
        inteiro *= 3;
        real *= 3;
    }
};

void Modelo::escreve_dados()
{
    cout << "Numero inteiro: " << inteiro << endl;
    cout << "Numero real: " << real << endl;
}

int main() {
    Modelo x;

    x.le_dados();

    Modelo y;

    y.le_dados();

    y = x;

    y.triplicar_membros();

    cout << "Objeto X:" << endl;
    x.escreve_dados();

    cout << "Objeto Y:" << endl;
    y.escreve_dados();

    return 0;
}
