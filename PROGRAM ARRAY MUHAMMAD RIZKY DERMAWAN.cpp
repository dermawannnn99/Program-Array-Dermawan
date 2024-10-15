#include <iostream>
using namespace std;

int main() {
    int JumlahElemen;

    cout << "==============================================" << endl;
    cout << "|                                            |" << endl;
    cout << "|            PROGRAM ARRAY MENREY            |" << endl;
    cout << "|                                            |" << endl;
    cout << "==============================================" << endl << endl;

    // ini buat input jumlah elemen array
    cout << ">Silahkan Masukkan jumlah elemen array: ";
    cin >> JumlahElemen;

    cout << "-----------------------------------------" << endl;

    int array[JumlahElemen];

    // buat nilai-nilai untuk array dari user
    cout << "| Masukkan " << JumlahElemen << " angka:" << endl;
    for (int i = 0; i < JumlahElemen; i++) {
        cout << "| Angka ke - " << i + 1 << " = ";
        cin >> array[i];
    }

    cout << "-----------------------------------------" << endl;

    // buat nyari nilai tertinggi dalam array
    int NilaiTertinggi = array[0];
    for (int i = 1; i < JumlahElemen; i++) {
        if (array[i] > NilaiTertinggi) {
            NilaiTertinggi = array[i];
        }
    }

    // tampilkan nilai tertinggi
    cout << "Nilai tertinggi dalam array adalah: " << NilaiTertinggi << endl;
    cout << "-----------------------------------------" << endl << endl;

    // memeriksa apakah suatu angka ada dalam array
    int cari;
    cout << ">Silahkan Masukkan angka yang ingin dicari: ";
    cin >> cari;

    // pencarian angka di dalam array dan langsung mencetak indeks jika ditemukan
    for (int i = 0; i < JumlahElemen; i++) {
        if (array[i] == cari) {
            cout << "-----------------------------------------" << endl;
            cout << "Angka " << cari << " ditemukan pada indeks ke - " << i << endl;
            cout << "-----------------------------------------" << endl;
            return 0;  // akhirin program saat angka ditemukan
        }
    }

    // kalo angka tidak ditemukan
    cout << "-----------------------------------------" << endl;
    cout << "Angka " << cari << " tidak ditemukan!" << endl;
    cout << "-----------------------------------------" << endl;

    return 0;
}
