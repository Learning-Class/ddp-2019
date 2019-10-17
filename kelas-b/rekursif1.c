#include<stdio.h>

int faktorial(int x) {
	if(x == 1) {
		return 1;
	} else {
		int hasil = x * faktorial(x - 1);
		return hasil;
	}
}

int main() {
	printf("%d", faktorial(5));
}

/* Penjelasan
 * f(5) = 5 * f(4)
 * 		f(4) = 4 * f(3)
 * 			f(3) = 3 * f(2)
 * 				f(2) = 2 * f(1)
 * 					f(1) = 1
 * 					f1 sudah selesai
 * 				f(2) = 2 * 1 = 2
 * 				f2 sudah selesai
 *
 *
 *
 *
 *
 *
 *
 *
 */
