#include <iostream>
#include <math.h>

using namespace std;

class circulo
{
private:
    double raio;
public:
    void le_raio()
    {
        do{
            cout << "Digite o valor do raio: " << endl;
            cin >> raio;
        } while(raio <= 0);
    }
    double area()
    {
        const double pi = 3.14;

        return pow(raio, 2) * pi;
    }

    double circum()
    {
        const double pi = 3.14;

        return 2 * pi * raio;
    }
};

int main()
{
    circulo area;

    area.le_raio();

    cout << "O valor da area = " << area.area() << endl;
    cout << "O valor da circunferencia = " << area.circum();

    return 0;
}
