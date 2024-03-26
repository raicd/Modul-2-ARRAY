#include <iostream>
using namespace std;

// Raihan Ramadhan
// 2311102040
// IF-11-A

int main()
{
    const int ukuranArray = 10; 

    int bilangan[ukuranArray];

    cout << "Data Array: ";
    for (int i = 0; i < ukuranArray; ++i)
    {
        cin >> bilangan[i];
    }

    cout << "Nomor Ganjil: ";
    for (int i = 0; i < ukuranArray; ++i)
    {
        if (bilangan[i] % 2 != 0)
        {
            cout << bilangan[i] << " ";
        }
    }
    cout << endl;

    cout << "Nomor Genap: ";
    for (int i = 0; i < ukuranArray; ++i)
    {
        if (bilangan[i] % 2 == 0)
        {
            cout << bilangan[i] << " ";
        }
    }
    cout << endl;

    return 0;
}
