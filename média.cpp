#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class marca
{
private:
    double nota1;
    double nota2;
    double nota3;
public:
    void entrada()
    {
        cout << "Digite a primeira nota: ";
        cin >> nota1;
        cout << "Digite a segunda nota: ";
        cin >> nota2;
        cout << "Digite a terceira nota: ";
        cin >> nota3;
    }
    double soma()
    {
        return nota1 + nota2 + nota3;
    }
    double media()
    {
        return soma() / 3;
    }
};

int main()
{
    marca estudante;

    estudante.entrada();

    cout << "Soma das notas = " << estudante.soma() << endl;
    cout << "Media das notas = " << estudante.media() << endl;

    return 0;
}

