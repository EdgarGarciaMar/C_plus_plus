#include <iostream>

using namespace std;

int main()
{
    short a = 0;
    int arr[20];
    for (int i = 0; i < 20; i++)
    {
        cin >> arr[i];
    }
    cout << "impresion:" << endl;
    for (int i = 0; i < 20; i++)
    {
        cout << arr[i] << endl;
    }
    while (a < 20)
    {
        arr[a] = a;
        a++;
    }
    a = 0;
    while (a < 20)
    {
        cout << "pp: " << arr[a] << endl;
        a++;
    }
    return 0;
}
