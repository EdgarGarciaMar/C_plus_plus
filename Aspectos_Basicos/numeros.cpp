#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    // operaciones basicas
    // 1 + 1
    // 1 - 2
    // 1 * 2
    // 5 / 5
    // 10 % 2
    cout << pow(2, 3) << endl;   // pow(numero,potencia) =potencia
    cout << sqrt(16) << endl;    // raiz cuadrada
    cout << round(2.75) << endl; // redondear
    cout << ceil(2.25) << endl;  // redondear por arriba
    cout << floor(2.25) << endl; // redondea por abajo
    // constantes
    const int num = 10; // no se puede reasignar valor
    cout << num << endl;
    return 0;
}