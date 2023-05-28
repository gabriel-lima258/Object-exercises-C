#include <iostream>
#include <math.h>
#include <string>

using namespace std;

class Livro
{
private:
    string livroID;
    int paginas;
    double preco;
public:
    void obter()
    {
        cout << "Digite o ID do livro: ";
        cin.ignore();
        getline(cin, livroID);

        cout << "Digite o volume de paginas do livro: ";
        cin >> paginas;

        cout << "Digite o preco do livro: ";
        cin >> preco;
    }

    void mostrar()
    {
        cout << "Livro " << livroID << ", " << paginas << " paginas, " << preco << " reais." << endl;
    }

    void definir(const string& id, int numPag, double valor)
    {
        livroID = id;
        paginas = numPag;
        preco = valor;
    }

    double mostrarPreco()
    {
        return preco;
    }
};

int main()
{
    Livro livro1, livro2;

    cout << "Digite os detalhes do livro 1: " << endl;
    livro1.obter();

    cout << "\nDigite os detalhes do livro 2: " << endl;
    livro2.obter();

    cout << "\nDetalhes do livro 1: " << endl;
    livro1.mostrar();

    cout << "\nDetalhes do livro 2: " << endl;
    livro2.mostrar();

    if (livro1.mostrarPreco() > livro2.mostrarPreco())
    {
        cout << "\nO livro 1 e mais caro!" << endl;
    } else if (livro1.mostrarPreco() < livro2.mostrarPreco())
    {
        cout << "\nO livro 2 e mais caro!" << endl;
    } else {
        cout << "\nOs dois livros tem o mesmo preco!";
    }

    return 0;
}
