#include <stdio.h>

// membuat struct
struct Mahasiswa {
    char *name;
    char *address;
    int age;
};
struct Perkuliahan {
    char *name;
    int sks;
};
struct Nilai {
	struct Mahasiswa mahasiswa;
	struct Perkuliahan perkuliahan;
};


void main(){
	// Biasanya kita nyimpennya gini
	/*char nama[10][100];*/
	/*char alamat[10][100];*/
	/*int umur[100];*/

	/*int indeks = 4;*/

	/*printf("nama : %s\n", nama[indeks]);*/
	/*printf("alamat : %s\n", alamat[indeks]);*/
	/*printf("umur : %d\n", umur[indeks]);*/

    // menggunakan struct
    struct Mahasiswa mhs1, mhs2;
    struct Mahasiswa arrayMhs[10];

    // mengisi nilai ke struct
	arrayMhs[0].name = "Dian";
	arrayMhs[0].address = "Mataram";
	arrayMhs[0].age = 22;

	arrayMhs[1].name = "Bambang";
	arrayMhs[1].address = "Surabaya";
	arrayMhs[1].age = 23;

    // mencetak isi struct
    printf("## Mahasiswa 1 ##\n");
    printf("Nama: %s\n", arrayMhs[0].name);
    printf("Alamat: %s\n", arrayMhs[0].address);
    printf("Umur: %d\n", arrayMhs[0].age);

    printf("## Mahasiswa 2 ##\n");
    printf("Nama: %s\n", arrayMhs[1].name);
    printf("Alamat: %s\n", arrayMhs[1].address);
    printf("Umur: %d\n", arrayMhs[1].age);

}
	/*mhs1.name = "Dian";*/
	/*mhs1.address = "Mataram";*/
	/*mhs1.age = 22;*/

	/*mhs2.name = "Bambang";*/
	/*mhs2.address = "Surabaya";*/
	/*mhs2.age = 23;*/


