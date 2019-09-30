#include<iostream>

using namespace std;

int main() {
	// Variabel
	int nilai, cabs;
	
	// Input nilai
	cout << "Masukan nilai : ";
	cin >> nilai;
	cout << "Masukan jumlah cabs : ";
	cin >> cabs;

	// Proses
	cout << "Cara 1" << endl;
	if(cabs > 3) {
		cout << "E" << endl;
	} else if(nilai >= 80 && cabs >= 1 && cabs <= 3) {
		cout << "B" << endl;
	} else if(nilai < 80 && cabs >= 1 && cabs <= 3) {
		cout << "C" << endl;
	} else if(nilai < 80 && cabs == 0) {
		cout << "B" << endl;
	} else if(nilai >= 80 && cabs == 0) {
		cout << "A" << endl;	
	}

	cout << "Cara 2" << endl;
	if(cabs > 3) {
		cout << "E" << endl;
	} else if (cabs >= 1 && cabs <= 3) {
		if(nilai > 80) {
			cout << "B" << endl;
		} else {
			cout << "C" << endl;
		}	
	} else if (cabs == 0) {
		if(nilai >= 80) {
			cout << "A" << endl;
		} else {
			cout << "B" << endl;
		}	
	}
	
	return 0;
}
