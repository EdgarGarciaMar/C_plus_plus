#include <iostream>

using namespace std;

int main()
{
    int edad = 0;
    cout << "Ingresa tu edad" << endl;
    cin >> edad;
    cout << "Edad: " << edad << endl;

    string nombre;
    cout << "Ingresa tu nombre: " << endl;
    // getline(cin, nombre); //Forma alternativa de leer datos de consola
    cin >> nombre;
    cout << "Nombre: " << nombre << endl;
    return 0;
}