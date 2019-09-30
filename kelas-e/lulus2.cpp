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
		
		if(nilai == 'A') {
			jumlahLulus++;	
		} else if(nilai == 'B') {
			jumlahLulus++;
		} else if(nilai == 'C') {
			jumlahLulus++;
		} else if(nilai == 'D') {
			jumlahTidakLulus++;
		} else if(nilai == 'E') {
			jumlahTidakLulus++;
		} 		
		
		if(nilai > 70) {
			if(nilai < 90){
				nilai = b;
			}
		}
		
		if(nilai > 70 && nilai < 90) {
			nilai = b;
		}
	}
	cout << "lulus : " << jumlahLulus << endl;
	cout << "tidak lulus : " << jumlahTidakLulus << endl;

	return 0;
} 
