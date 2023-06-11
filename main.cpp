#include <iostream>

using namespace std;

class Perfeito {
private:
    int numero;

public:
    void entrada() {
        cout << "Digite um número: ";
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
            cout << perfeito.getNumero() << " é um número perfeito." << endl;
        } else {
            cout << perfeito.getNumero() << " não é um número perfeito." << endl;
        }

        cout << "Deseja continuar? (s/n): ";
        cin >> continuar;

    } while (continuar == 's' || continuar == 'S');

    return 0;
}
