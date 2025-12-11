// Nama: Alfin Oktavian
// Nim: 240401010282
// Kelas: IF102
// Mata Kuliah: Algoritma dan Pemrograman

#include <iostream>
#include <string>
#include <limits>
using namespace std;

int inputGolongan() {
    int g;
    while (true) {
        cout << "Golongan (1/2/3)\t: ";
        cin >> g;
        if (g == 1 || g == 2 || g == 3) return g;
        cout << ">>> Error! Golongan tidak valid. Ulangi. \n";

    }
}

int inputPendidikan() {
    string p;
    while (true) {
        cout << "Pendidikan (SMU/D3/S1)\t: ";
        cin >> p;

        if (p == "SMU" || p == "smu") return 1;
        if (p == "D3" || p == "d3") return 2;
        if (p == "S1" || p == "s1") return 3;

        cout << ">>> Error! Pendidikan tidak valid. Ulangi. \n";
    }
}

int main() {
    const int honorTetap = 3500000;
    const int honorLembur = 12500;

    string nama;
    char ulang = 'Y';

    while (ulang == 'Y' || ulang == 'y') {
        system("cls");

        cout << "Program Hitung Honor Karyawan Kontrak PT. DINGIN DAMAI\n";
        cout << "-------------------------------------------------------\n";

        cout << "Nama Karyawan\t\t: ";
       
        getline(cin, nama);

        int golongan = inputGolongan();
        int pendidikan = inputPendidikan();

        int jamKerja;
        cout << "Jumlah Jam Kerja\t: ";
        cin >> jamKerja;

        float persenJabatan = 0;
        if (golongan == 1) persenJabatan = 0.5;
        else if (golongan == 2) persenJabatan = 0.10;
        else persenJabatan = 0.15;

        int tunjJabatan = honorTetap * persenJabatan;

        float persenPendidikan = 0;
        if (pendidikan == 1) persenPendidikan = 0.025;
        else if (pendidikan == 2) persenPendidikan = 0.05;
        else persenPendidikan = 0.075;

        int tunjPendidikan = honorTetap * persenPendidikan;

        int lembur = 0;
        if (jamKerja > 8) {
            lembur = (jamKerja - 8) * honorLembur;
        }

        int total = honorTetap + tunjJabatan + tunjPendidikan + lembur;

        cout << "\n-------------------------------------------------------------\n";
        cout << "Karyawan yang bernama\t: " << nama << endl;
        cout << left;
        cout << "\nHonor yang diterima:\n ";
        cout << "Honor Tetap\t\t: Rp. " << honorTetap << endl;
        cout << "Tungjangan Jabatan\t: Rp. " << tunjJabatan << endl;
        cout << "Tunjangan Pendidikan\t: Rp. " << tunjPendidikan << endl;
        cout << "Honor Lembur\t\t: Rp. " << lembur << endl;
        cout << "-------------------------------------------------------\n";
        cout << "Honor Yang Diterima\t: Rp. " << total << endl;

        cout << "\nHitung ulang Honor Karyawan Lainya (Y/N)? ";
        cin >> ulang;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "\nProgram selesai. Terima kasih!\n";
    return 0;
    }
}