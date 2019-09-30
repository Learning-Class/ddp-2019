#include<iostream>
using namespace std;

void soal1_cara1() {
	cout << "Soal 1 Cara 1" << endl;
	int jumlahBaris, jumlahBintang;
	
	jumlahBaris = 10;
	
	for(int i = 0; i < jumlahBaris; i++) {
		
		jumlahBintang = i + 1;
		
		for(int j = 0; j < jumlahBintang; j++) {
			cout << "*";
		}
		cout << endl;
	}
}

void soal2_cara1() {
	cout << "Soal 2 Cara 1" << endl;
	int jumlahBaris, jumlahBintang;
	
	jumlahBaris = 10;
	
	for(int i = 0; i < jumlahBaris; i++) {
		
		jumlahBintang = jumlahBaris - i;
		
		for(int j = 0; j < jumlahBintang; j++) {
			cout << "*";
		}
		cout << endl;
	}
}

void soal3_cara1() {
	cout << "Soal 3 Cara 1" << endl;
	int jumlahBaris, jumlahSpasi, jumlahBintang;
	
	jumlahBaris = 10;
	
	for(int i = 0; i < jumlahBaris; i++) {
		
		jumlahSpasi = jumlahBaris - i - 1;
		
		for(int j = 0; j < jumlahSpasi; j++) {
			cout << " ";
		}
		
		jumlahBintang = i + 1;
		
		for(int j = 0; j < jumlahBintang; j++) {
			cout << "*";
		}
		cout << endl;
	}
}

void soal4_cara1() {
	cout << "Soal 4 Cara 1" << endl;
	int jumlahBaris, jumlahSpasi, jumlahBintang;
	
	jumlahBaris = 10;
	
	for(int i = 0; i < jumlahBaris; i++) {
		
		jumlahSpasi = jumlahBaris - i - 1;
		
		for(int j = 0; j < jumlahSpasi; j++) {
			cout << " ";
		}
		
		jumlahBintang = i * 2 + 1;
		
		for(int j = 0; j < jumlahBintang; j++) {
			cout << "*";
		}
		cout << endl;
	}
}

void soal5_cara1() {
	cout << "Soal 5 Cara 1" << endl;
	int jumlahBaris, jumlahSpasi, jumlahBintang;
	
	jumlahBaris = 10;
	
	for(int i = 0; i < jumlahBaris; i++) {
		
		jumlahSpasi = i;
		
		for(int j = 0; j < jumlahSpasi; j++) {
			cout << " ";
		}
		
		jumlahBintang = (jumlahBaris * 2) - (i * 2 + 1);
		
		for(int j = 0; j < jumlahBintang; j++) {
			cout << "*";
		}
		cout << endl;
	}
}

void soal6_cara1() {
	cout << "Soal 5 Cara 1" << endl;
	int jumlahBaris, jumlahBarisA, jumlahBarisB, jumlahSpasi, jumlahBintang;
	
	// Jumlah baris harus ganjil
	jumlahBaris = 11; 
	jumlahBarisA = jumlahBaris / 2;	
	jumlahBarisB = jumlahBaris - jumlahBarisA;
	
	// Bagian A
	jumlahBaris = jumlahBarisA;
	for(int i = 0; i < jumlahBaris; i++) {
		// Ini harus diganti	
		// Aslinya seperti ini :
		// jumlahSpasi = jumlahBaris - i - 1; 
		// Diganti menjadi seperti ini
		// ditambah (1), atau bisa juga (-1) nya dihilangkan
		jumlahSpasi = jumlahBaris - i - 1 + 1;
		
		for(int j = 0; j < jumlahSpasi; j++) {
			cout << " ";
		}
		
		jumlahBintang = i * 2 + 1;
		
		for(int j = 0; j < jumlahBintang; j++) {
			cout << "*";
		}
		cout << endl;
	}

	// Bagian B	
	jumlahBaris = jumlahBarisB;
	for(int i = 0; i < jumlahBaris; i++) {
		jumlahSpasi = i;
		
		for(int j = 0; j < jumlahSpasi; j++) {
			cout << " ";
		}
		
		jumlahBintang = (jumlahBaris * 2) - (i * 2 + 1);
		
		for(int j = 0; j < jumlahBintang; j++) {
			cout << "*";
		}
		cout << endl;
	}
}

int main() {
	soal1_cara1();
	soal2_cara1();
	soal3_cara1();
	soal4_cara1();
	soal5_cara1();
	soal6_cara1();
	
	return 0;
}
