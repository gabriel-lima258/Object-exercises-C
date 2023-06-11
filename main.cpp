#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

class Pedagio {
private:
    int carros_total;
    double dinheiro_total;

public:
    Pedagio() : carros_total(0), dinheiro_total(0.0) {}

    void Paga_carro()
    {
        carros_total++;
        dinheiro_total += 0.50;
    }

    void Nao_Paga_carro()
    {
        carros_total++;
    }

    void mostra()
    {
        cout << "Total de carros: " << carros_total << endl;
        cout << fixed << setprecision(2);
        cout << "Total de dinherio arrecadado: " << dinheiro_total << " R$"<< endl;
    }

};

int main() {
    Pedagio pedagio;

    char tecla;

    cout << "Digite '1' para registrar um carro pagante e '2' para carro não pagante. Caso queira encerrar aperte 'ESC'" << endl;

    while ((tecla = _getch()) != 27) // 27 é o código da tecla Esc
    {
        if (tecla == '1') {
            pedagio.Paga_carro();
            cout << "O carro pagou o pedagio com sucesso!" << endl;
        } else if  ( tecla == '2') {
            pedagio.Nao_Paga_carro();
            cout << "Carro não pagante registrado com sucesso!" << endl;
        }
    }

    pedagio.mostra();

    return 0;
}
