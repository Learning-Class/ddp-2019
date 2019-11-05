#include<iostream>
using namespace std;

int main() {
	const int JUMLAH = 5;
	long siswa[JUMLAH] = {10, 20, 30, 40, 50};

	cout << siswa << endl;
	cout << *(siswa + 1) << endl;

	printf("siswa + 0 = %lld\n", siswa + 0);
	printf("siswa + 1 = %lld\n", siswa + 1);
	printf("siswa + 2 = %lld\n", siswa + 2);
	printf("siswa + 3 = %lld\n", siswa + 3);
	printf("siswa + 4 = %lld\n", siswa + 4);

	// sama aja kaya siswa[1] = 33333;
	*(siswa + 1) = 33333;

	// sama aja kaya 11 = 33333;
	(*siswa + 1) = 33333;

	// Kalo array 2 dimensi
	*(*(siswa + 1) + 1)

	return 0;
}
