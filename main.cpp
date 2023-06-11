#include <iostream>

using namespace std;

class Perfeito {
private:
    int numero;

public:
    void entrada() {
        cout << "Digite um n�mero: ";
        cin >> numero;
    }

    bool verifica_perfeito() {
        int soma = 0;

        for (int i = 1; i <= numero / 2; i++) {
            if (numero % i == 0) {
                soma += i;
            }
        }

        return (soma == numero);
    }

    int getNumero() {
        return numero;
    }
};

int main() {
    char continuar;

    do {
        Perfeito perfeito;
        perfeito.entrada();

        if (perfeito.verifica_perfeito()) {
            cout << perfeito.getNumero() << " � um n�mero perfeito." << endl;
        } else {
            cout << perfeito.getNumero() << " n�o � um n�mero perfeito." << endl;
        }

        cout << "Deseja continuar? (s/n): ";
        cin >> continuar;

    } while (continuar == 's' || continuar == 'S');

    return 0;
}
