// Nama: Alfin Oktavian
// Nim: 240401010282
// Kelas: IF102
// Mata Kuliah: Algoritma dan Pemrograman

#include <iostream>
using namespace std;

int main() {
    for (int baris = 1; baris <= 5; baris++) {
        for (int kolom = 1; kolom <= 5; kolom++) {
            cout << baris * kolom << "\t";
        }

        cout << endl;
    }
cout << "\nProgram selesai. Terima kasih!\n";
    return 0;
    
}