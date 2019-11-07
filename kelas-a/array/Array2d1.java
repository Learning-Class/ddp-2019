//package Array2d;
import java.util.Scanner;

public class Array2d1 {
	public static void main(String args[]) {
		Scanner input = new Scanner(System.in);
		// Input baris kolom
		int baris, kolom;
		System.out.print("Masukan baris : ");
		baris = input.nextInt();

		System.out.print("Masukan kolom : ");
		kolom = input.nextInt();

		// Input dikali dengan apa
		System.out.print("Masukan dikali dengan apa : ");
		int kali = input.nextInt();

		// Input matriks
		int matriks[][] = new int[baris][kolom];
		int i,j;
		for(i = 0; i < baris; i++) {
			for(j = 0; j < kolom; j++) {
				System.out.print("Masukan baris " + i + " kolom " + j + " : ");
				matriks[i][j] = input.nextInt();
			}
		}

		// Hitung perkalian
		// Semua elemen dikali dengan apa yang diklai
		for(i = 0; i < baris; i++) {
			for(j = 0; j < kolom; j++) {
				matriks[i][j] = matriks[i][j] * kali;
			}
		}
		//matriks[0][0] = matriks[0][0] * kali;
		//matriks[0][1] = matriks[0][1] * kali;
		//matriks[0][2] = matriks[0][2] * kali;

		// Cetak hasil
		for(i = 0; i < baris; i++) {
			for(j = 0; j < kolom; j++) {
				System.out.print(matriks[i][j] + " ");
			}
			System.out.println();
		}
	}
}
