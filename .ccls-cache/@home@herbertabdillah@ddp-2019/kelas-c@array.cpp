#include<iostream>

using namespace std;

int main() {
	//int jumlahMahasiswa = 5;
	//int nilai[jumlahMahasiswa];
	//// sama aja kaya : int nilai[5];

	//for(int i = 0; i < jumlahMahasiswa; i++) {
		//cout << "Masukan nilai " << (i + 1) << " : ";
		//cin >> nilai[i];
	//}

	//for(int i = 0; i < jumlahMahasiswa; i++) {
		//cout << "Nilai ke" << (i + 1) << " : " << nilai[i] << endl;
	//}
	const int BARIS = 2;
	const int KOLOM = 3;
	int matrix[BARIS][KOLOM];
	for(int i = 0; i < BARIS; i++) {
		for(int j = 0; j < KOLOM; j++) {
			cin >> matrix[i][j];
		}
	}

	return 0;
}
