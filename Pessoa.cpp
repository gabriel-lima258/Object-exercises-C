#include <iostream>
#include <string>

using namespace std;

struct Endereco
{
    int numeroCasa;
    string rua, cidade, estado;
};

class Pessoa {
private:
    string nome;
    int idade;
    double salario;
    Endereco endereco;

public:
    void entrada_dados()
    {
        cout << "Digite o nome: ";
        getline(cin, nome);

        cout << "Digite a idade: ";
        cin >> idade;

        cout << "Digite o salario: ";
        cin >> salario;

        cout << "Digite o número da casa: ";
        cin >> endereco.numeroCasa;

        cin.ignore(); // Ignorar a quebra de linha residual

        cout << "Digite a rua: ";
        getline(cin, endereco.rua);

        cout << "Digite a cidade: ";
        getline(cin, endereco.cidade);

        cout << "Digite o estado: ";
        getline(cin, endereco.estado);
    }

    void mostra_dados()
    {
        cout << "Detalhes da pessoa: " << endl;
        cout << "Nome: " << nome << endl;
        cout << "Idade: " << idade << " anos" << endl;
        cout << "Salario: " << salario << " R$" << endl;
        cout << "Numero da casa: " << endereco.numeroCasa << endl;
        cout << "Rua: " << endereco.rua << endl;
        cout << "Cidade: " << endereco.cidade << endl;
        cout << "Estado: " << endereco.estado << endl;
    }
};

int main() {
    Pessoa pessoa;

    pessoa.entrada_dados();
    pessoa.mostra_dados();

    return 0;
}
