#include<stdio.h>
#include<string.h>

int main() {
    char kode[7];
    char kelas;
    int jumlahAnak, jumlahDewasa;

    float hargaDasar, hargaKelas, hargaAnak, hargaDewasa, hargaTotal;
    printf("kode, kelas, jumlahANak ,jumlah dewasa");
    scanf("%s", kode);
    scanf(" %c", &kelas);
    scanf("%d", &jumlahAnak);
    scanf("%d", &jumlahDewasa);

    //Hitung harga tujuan dasar
    if(strcmp(kode, "PAL001") == 0) {
        hargaDasar = 350000;
    }
    else if(strcmp(kode, "PAL002") == 0) {
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
    //Hitung harga dewasa
    hargaDewasa = hargaKelas * jumlahDewasa;

    //Hitung harga anak
    hargaAnak = hargaKelas * jumlahAnak * 0.6;

    //Hitung total
    hargaTotal = hargaDewasa + hargaAnak;

    //outout
    printf("%.2f", hargaTotal);
    printf("%.2f", hargaTotal);
    printf("%.2f", hargaTotal);
    printf("%.2f", hargaTotal);
    printf("%.2f", hargaTotal);
    printf("%.2f", hargaTotal);

    return 0;
}
