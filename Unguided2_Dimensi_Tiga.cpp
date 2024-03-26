#include <iostream>
using namespace std;

int main()
{
    int x_size, y_size, z_size;

    cout << "Masukkan ukuran untuk dimensi x: ";
    cin >> x_size;
    cout << "Masukkan ukuran untuk dimensi y: ";
    cin >> y_size;
    cout << "Masukkan ukuran untuk dimensi z: ";
    cin >> z_size;

    // Deklarasi array dengan ukuran yang dimasukkan oleh pengguna
    int arr[x_size][y_size][z_size];

    // Input elemen
    for (int x = 0; x < x_size; x++)
    {
        for (int y = 0; y < y_size; y++)
        {
            for (int z = 0; z < z_size; z++)
            {
                cout << "Masukkan Nilai Array[" << x << "][" << y << "][" << z << "] = ";
                cin >> arr[x][y][z];
            }
        }
        cout << endl;
    }

    // Output Array
    for (int x = 0; x < x_size; x++)
    {
        for (int y = 0; y < y_size; y++)
        {
            for (int z = 0; z < z_size; z++)
            {
                cout << "Data Array[" << x << "][" << y << "][" << z << "] = " << arr[x][y][z] << endl;
            }
        }
    }
    cout << endl;

    // Tampilan array
    for (int x = 0; x < x_size; x++)
    {
        for (int y = 0; y < y_size; y++)
        {
            for (int z = 0; z < z_size; z++)
            {
                cout << arr[x][y][z] << ' ';
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
