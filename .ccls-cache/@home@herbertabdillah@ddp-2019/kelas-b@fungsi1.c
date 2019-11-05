#include<stdio.h>

int pangkat(int a, int b) {
	printf("Halo\n");
	int hasil = 1;
	for (int i = 0; i < b; i++) {
		hasil *= a;
	}
	return hasil;
	printf("Hai\n");
}

char* apakahLulus(int nilai) {
	if(nilai > 70) {
		return "Lulus";
	} else {
		return "Tidak Lulus";
	}
}

void salam() {
	printf("Assalamualaikum\n");
}
int main() {
	salam();
	int hasil = pangkat(5, 2) + pangkat(10, 2);
	printf("%d\n", hasil);

	printf("%s\n", apakahLulus(80));
	printf("%s\n", apakahLulus(20));

}
