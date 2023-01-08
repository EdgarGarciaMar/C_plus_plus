#include <iostream>

using namespace std;

class Animal
{
public:
    void comer()
    {
        cout << "El animal come" << endl;
    }
    void dormir()
    {
        cout << "El animal duerme" << endl;
    }
};

class Perro : public Animal // la clase perro hereda de la clase animal(super clase)
{
public:
    void ladrar()
    {
        cout << "El perro ladra" << endl;
    }
};

int main()
{
    Perro perro1;
    perro1.comer();
    perro1.ladrar();
    return 0;
}