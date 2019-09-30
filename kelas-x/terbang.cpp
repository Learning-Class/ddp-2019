#include<iostream>
using namespace std;

int main() {
    string kode;
    char kelas;
    int jumlahAnak, jumlahDewasa;

    float hargaDasar, hargaKelas, hargaAnak, hargaDewasa, hargaTotal;

    // Menu rute
    cout << "\
       Kode \t Kota \t Harga\n\
       PAL001 \t Semarang \t 350.000\n\
       PAL002 \t Yogyakarta \t 450.000\n\
       \n";
    cout <<"Masukan kode : " << endl;
    cin >> kode;

    // Menu kelas
    cout << "\
       Kode \t Kelas \t Keterangan\n\
       b \t Bisnis \t Harga 120%\n\
       e \t Ekonomi \t Harga tetap\n\
        \n";
    cout <<"Masukan kelas : " << endl;
    cin >> kelas;

    // Menu penumpang
    cout << "\
       Jenis \t Keterangan\n\
       Anak \t Harga 60%\n\
       Dewasa \t Harga tetap\n\
        \n";
    cout <<"Masukan jumlah anak : " << endl;
    cin >> jumlahAnak;

    cout <<"Masukan jumlah dewasa : " << endl;
    cin >> jumlahDewasa;

    // Proses Hitung
    // Hitung harga tujuan dasar
    if(kode == "PAL001") {
        hargaDasar = 350000;
    }
    else if(kode == "PAL002") {
        hargaDasar = 450000;
    }

    //Hitung harga bisnis/ekonomi
    switch(kelas){
        case 'b':
            hargaKelas = hargaDasar * 1.2;
            break;
        case 'e':
            hargaKelas = hargaDasar;
            break;
    }

    // Hitung harga dewasa
    hargaDewasa = hargaKelas * jumlahDewasa;

    // Hitung harga anak
    hargaAnak = hargaKelas * jumlahAnak * 0.6;

    // Hitung total
    hargaTotal = hargaDewasa + hargaAnak;

    // outout
    cout << fixed << "harga total : " <<  hargaTotal << endl;

    return 0;
}
