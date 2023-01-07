#include <iostream>

using namespace std;

void funcion1() // funcion vacia, no retorna nada y no recibe ningun argumento
{
    cout << "Hola, esto es una calculadora" << endl;
}
short suma(short a, short b) // funcion short que retorna un numero
{
    return a + b;
}
short resta(short a, short b) // funcion short que retorna un numero
{
    return a - b;
}

void funcion2(void); // se declara y se pasa el tipo de funcion que es, en este caso es void

void comparar(short a, short b)
{
    if (a > b && a != 0 && b != 0)
    {
        cout << "a>b" << endl;
    }
    else if (a < b)
    {
        cout << "a<b" << endl;
    }
    else
    {
        cout << "Son iguales" << endl;
    }
}

int main()
{
    short a = 10;
    short b = 20;
    funcion1();
    cout << "Suma: " << suma(a, b) << "\n"
         << "Resta: " << resta(a, b) << endl;
    funcion2();
    comparar(a, b);
    return 0;
}

void funcion2()
{
    cout << "Funcion 2 que necesita ser declarada" << endl;
}