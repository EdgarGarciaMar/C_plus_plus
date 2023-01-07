#include <iostream>

using namespace std;

int main()
{
    short arr[3][4]; //[Fila][columna] es una matriz
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Impresion del arreglo 2D" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
            if (j == 3)
                cout << "\n";
        }
    }
    return 0;
}