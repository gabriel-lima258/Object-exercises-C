#include <iostream>
#include <string>

using namespace std;

class Cartesiano
{
private:
    double x, y;
public:
    void entrada_dados();
    void mostra_dados();
};

void Cartesiano::entrada_dados() // declaração do membro static dentro da class Cartesiano
    
{
    cout << "Digite a coordenada x do plano: ";
    cin >> x;
    cout << "Digite a coordenada y do plano: ";
    cin >> y;
}

void Cartesiano::mostra_dados()
{
    cout << "Coordenadas do sistema cartesiano: " << endl;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
}

int main() {

    Cartesiano dc;

    dc.entrada_dados();
    dc.mostra_dados();

    return 0;
}
