#include <iostream>

using namespace std;

int main()
{
    string nombre = "edgar";
    cout << nombre[0] << endl; // Accesando a la pos 0 del string

    // modificar una caracter de una cadena
    nombre[3] = 'Q';
    cout << nombre << endl;
    // longitude de una cadena
    cout << "Longitud del string : " << nombre.length() << "\n";
    // Buscar caracteres dentro del string
    cout << "busca caracter : " << nombre.find('g', 0) << "\n"; // find("que buscar",posicion inicio) = pos del caracter
    // extraer parte del string
    string name = nombre.substr(1, 2); // substr(pos inicio,caracteres extraidos numero) = strinmg
    cout << "Caracteres extraidos:" << name << endl;
    return 0;
}