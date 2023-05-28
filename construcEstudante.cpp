#include <iostream>
#include <math.h>
#include <string>

using namespace std;

class Estudante
{
private:
    double nota;
    string grau;
public:
    Estudante(double notaInicial,const string& grauInicial) : nota(notaInicial), grau(grauInicial) {}

    void mostraValores()
    {
        cout << "Nota: " << nota << endl;
        cout << "Grau: " << grau << endl;
    }
};

int main()
{
    Estudante estudante1(9.5, "Medicina");
    Estudante estudante2(8.5, "Engenharia");

    cout << "Valores do Estudante 1: " << endl;
    estudante1.mostraValores();
    cout << "Valores do Estudante 2: " << endl;
    estudante2.mostraValores();

    return 0;
}
