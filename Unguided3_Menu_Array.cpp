#include <iostream>
using namespace std;

int daftar_bilbul[10];
bool is_array_inputted = false;

int main() {
    int pilih;
    int i;
    int bilbul;
    int minimum;
    int total;
    char ulang;

    // Input array
    cout << "Masukkan Bilangan Bulat:" << endl;
    for (i = 0; i < 10; i++) {
        cout << " Bilangan ke " << (i + 1) << ": ";
        cin >> bilbul;
        daftar_bilbul[i] = bilbul;
    }
    is_array_inputted = true;

    do {
        cout << "\n----MENU----\n";
        cout << "1. Cari Nilai Minimum\n";
        cout << "2. Cari Nilai Maksimum\n";
        cout << "3. Hitung Rata-Rata\n";
        cout << "4. Keluar\n";
        cout << "\nPilihan Anda: ";
        cin >> pilih;

        switch (pilih) {
            case 1:
                if (is_array_inputted) {
                    minimum = daftar_bilbul[0];
                    for (i = 1; i < 10; i++) {
                        if (daftar_bilbul[i] < minimum) {
                            minimum = daftar_bilbul[i];
                        }
                    }
                    cout << "Nilai Minimum: " << minimum << endl;
                } else {
                    cout << "Anda harus memasukkan array terlebih dahulu.\n";
                }
                break;

            case 2:
                if (is_array_inputted) {
                    int maksimum = daftar_bilbul[0];
                    for (i = 1; i < 10; i++) {
                        if (daftar_bilbul[i] > maksimum) {
                            maksimum = daftar_bilbul[i];
                        }
                    }
                    cout << "Nilai Maksimum: " << maksimum << endl;
                } else {
                    cout << "Anda harus memasukkan array terlebih dahulu.\n";
                }
                break;

            case 3:
                if (is_array_inputted) {
                    total = 0;
                    for (i = 0; i < 10; i++) {
                        total += daftar_bilbul[i];
                    }
                    double rata_rata = static_cast<double>(total) / 10;
                    cout << "Nilai Rata-Rata: " << rata_rata << endl;
                } else {
                    cout << "Anda harus memasukkan array terlebih dahulu.\n";
                }
                break;

            case 4:
                cout << "Terima kasih.\n";
                return 0;

            default:
                cout << "\nAnda Salah Input.\n";
        }

        cout << "\nApakah Anda ingin mengulangi (y/n)? ";
        cin >> ulang;
    } while (ulang == 'y' || ulang == 'Y');

    return 0;
}
