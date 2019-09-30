#include<iostream>
using namespace std;

int main() {
	// Variabel
	char nilai;
	int jumlahSiswa, jumlahLulus = 0, jumlahTidakLulus = 0;

	// Input
	cin >> jumlahSiswa;

	// Proses
	for(int i = 0; i < jumlahSiswa; i++) {
		
		cin >> nilai;
		
		if(nilai == 'A' || nilai == 'B' || nilai == 'C') {
			jumlahLulus++;	
		} else {
			jumlahTidakLulus++;	
		}
		
	}
	cout << "lulus : " << jumlahLulus << endl;
	cout << "tidak lulus : " << jumlahTidakLulus << endl;

	return 0;
} 
