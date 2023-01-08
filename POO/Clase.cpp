#include <iostream>

using namespace std;

class Alumno // definicion de la clase
{
private: // variables privadas de la clase
         // nada fuera de la clase puede acceder a ellas
    string nombre;
    int edad;
    double nota;

public:
    Alumno(string nombre_, int edad_, double nota_) // constructor de la clase
    {
        nombre = nombre_;
        edad = edad_;
        nota = nota_;
        cout << "Nuevo alumno registrado " << nombre + " " << edad << " " << nota << endl;
    }
    Alumno() // segundo constructor
    {
        nombre = "Por asignar";
        edad = 0;
        nota = 0;
        cout << "Nuevo alumno registrado " << nombre + " " << edad << " " << nota << endl;
    }
    // metodo
    bool aprobado()
    {
        if (nota >= 5)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void imprimir()
    {
        cout << "Alumno: " << this->nombre + " " << this->edad << this->nota << endl;
    }
    // getters
    string getNombre()
    {
        return nombre;
    }

    int getEdad()
    {
        return edad;
    }

    double getNota()
    {
        return nota;
    }
    // setters

    void setNombre(string name)
    {
        this->nombre = name;
    }
    void setEdad(int edad_1)
    {
        this->edad = edad_1;
    }
    void setNota(double nota_1)
    {
        this->nota = nota_1;
    }
};

int main()
{

    Alumno alumno1("Eduardo", 21, 8.94);
    Alumno alumno2; // cuando el constructor no recibe nada se usa el 2do constructor
    cout << alumno1.aprobado() << endl;
    cout << alumno2.aprobado() << endl;

    alumno2.setNombre("Luis");
    alumno2.setEdad(10);
    alumno2.setNota(9.10);
    alumno2.imprimir();
    cout << alumno2.aprobado() << endl;
    cout << alumno2.getNombre() << endl;
    cout << alumno2.getEdad() << endl;
    cout << alumno2.getNota() << endl;

    return 0;
}