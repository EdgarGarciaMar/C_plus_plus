#include <iostream>

using namespace std;

int main()
{
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
    return 0;
}
