//package Array2d;
import java.util.Scanner;

public class Array2d {
	public static void masuk(int[][]matriks, int BARIS, int KOLOM) {
		int i, j;
		Scanner input = new Scanner(System.in);
		for(i = 0; i < BARIS; i++) {
			for(j = 0; j < KOLOM; j++) {
				System.out.print("Masukan matriks index baris " + i + " Kolom " + j + " : ");
				matriks[i][j] = input.nextInt();
			}
		}
	}

	public static void cetak(int[][]matriks, int BARIS, int KOLOM) {
		int i, j;
		for(i = 0; i < BARIS; i++) {
			for(j = 0; j < KOLOM; j++) {
				System.out.print(matriks[i][j]);
			}
			System.out.println();
		}
	}

	public static void main(String args[]) {
		int baris, kolom;
		Scanner input = new Scanner(System.in);
		System.out.print("Masukan baris : ");
		baris = input.nextInt();

		System.out.print("Masukan kolom : ");
		kolom = input.nextInt();

		int matriks[][] = new int[baris][kolom];
		masuk(matriks, baris, kolom);
		cetak(matriks, baris, kolom);
		//int BARIS = 2;
		//int KOLOM = 2;
		//int matriks[][] = new int[BARIS][KOLOM];
		//matriks[0][0] = 1;
		//matriks[0][1] = 2;
		//matriks[1][0] = 3;
		//matriks[1][1] = 4;
		//int i, j;
		//for(i = 0; i < BARIS; i++) {
			//for(j = 0; j < KOLOM; j++) {
				//System.out.print(matriks[i][j]);
			//}
			//System.out.println();
		//}
	}
}
