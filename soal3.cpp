// Nama: Alfin Oktavian
// Nim: 240401010282
// Kelas: IF102
// Mata Kuliah: Algoritma dan Pemrograman

#include <iostream>
#include <string>
using namespace std;

// --------------------------------------------
// Fungsi input jenis susu (validasi A/B/C)
// --------------------------------------------
char inputJenisSusu() {
    char kode;
    while (true) {
        cout << "Masukan Jenis Susu (A/B/C)\t: ";
        cin >> kode;
        kode = toupper(kode);

        if (kode == 'A' || kode == 'B' || kode == 'C')
            return kode;

        cout << ">>> Error! Kode susu tidak valid. Ulangi.\n";
    }
}

// --------------------------------------------
// Fungsi input ukuran kaleng (1/2/3) & validasi fail input
// --------------------------------------------
int inputUkuran() {
    int ukuran;
    while (true) {
        cout << "Masukan Ukuran Kaleng (1/2/3)\t: ";
        cin >> ukuran;

        if (cin.fail()) {
            cin.clear();            // reset error flag
            cin.ignore(1000, '\n'); // bersihkan buffer input
            cout << ">>> Error! Input harus angka!\n";
            continue;
        }

        if (ukuran == 1 || ukuran == 2 || ukuran == 3)
            return ukuran;

        cout << ">>> Error! Kode ukuran tidak valid. Ulangi.\n";
    }
}

// --------------------------------------------
// MAIN PROGRAM
// --------------------------------------------
int main() {
    char ulang = 'Y';

    while (toupper(ulang) == 'Y') {

        system("cls");   // opsional untuk Windows

        cout << "=============================================\n";
        cout << "          TOKO KELONTONG KERONCONGAN       \n";
        cout << "=============================================\n";
        cout << "A. Susu Dancow\n";
        cout << "1. Ukuran Kecil\n";
        cout << "2. Ukuran Sedang\n";
        cout << "3. Ukran Besar\n";
        cout << "----------------------------------------------\n";
        cout << "B. Susu Bendera\n";
        cout << "1. Ukuran Kecil\n";
        cout << "2. Ukruan Sedang\n";
        cout << "3. Ukuran Besar\n";
        cout << "-----------------------------------------------\n";
        cout << "C. Susu SGM\n";
        cout << "1. Ukuran Kecil\n";
        cout << "2. Ukuran Sedang\n";
        cout << "3. Ukuran Besar\n";
        cout << "---------------------------------------------\n";
        cout << "Ukuran Kaleng:\n";
        cout << "1. Kecil\n";
        cout << "2. Sedang\n";
        cout << "3. Besar\n";
        cout << "---------------------------------------------\n";

        // Input
        char jenis = inputJenisSusu();
        int ukuran = inputUkuran();

        // Tentukan harga
        int harga = 0;
        switch (jenis) {
        case 'A': // Dancow
            if (ukuran == 1) harga = 15000;
            else if (ukuran == 2) harga = 20000;
            else harga = 25000;
            break;

        case 'B': // Bendera
            if (ukuran == 1) harga = 13500;
            else if (ukuran == 2) harga = 17500;
            else harga = 20000;
            break;

        case 'C': // SGM
            if (ukuran == 1) harga = 15000;
            else if (ukuran == 2) harga = 18500;
            else harga = 22000;
            break;
        }

        // Input jumlah beli
        int jumlah;
        cout << "Jumlah Yang Dibeli \t\t: ";
        cin >> jumlah;

        int total = harga * jumlah;

        cout << "\n=================================================\n";
        cout << "Harga Satuan \t\t\tRp. " << harga << endl;
        cout << "Total Bayar \t\t\tRp. " << total << endl;
        cout << "=================================================\n";

        cout << "\nHitung transaksi lain? (Y/N): ";
        cin >> ulang;
    }

    cout << "\nProgram selesai. Terima kasih!\n";
    return 0;
}
