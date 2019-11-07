//package Array2d;
public class Array2d {
	public static int cari(int angka[], int yangDicari) {
		//int angka[] = {11, 20, 6, 7, 9};
		//int yangDicari = 7;
		//if(angka[0] == yangDicari) {
			//return 0;
		//}
		//if(angka[1] == yangDicari) {
			//return 1;
		//}
		//if(angka[2] == yangDicari) {
			//return 2;
		//}
		//if(angka[3] == yangDicari) {
			//return 3;
		//}
		//if(angka[4] == yangDicari) {
			//return 4;
		//}
		int i;
		int UKURAN = 5;
		for(int i = 0; i < UKURAN; i++) {
			if(angka[i] == yangDicari) {
				return i;
			}
		}
		return 0;
	}
	public static void main(String args[]) {
		int indeksHasilCari = cari();
		int angka[] = {11, 20, 6, 7, 9};
		int asdf[] = {100, 3333, 6, 7, 9};
		int qwe[] = {11, 20, 4999, 7, 9};
		cari(angka, 9);
		cari(angka, 4);
		cari(asdf, 3333);
		if(indeksHasilCari == 0) {
			System.out.println("Tidak ketemu");
		} else {
			System.out.println("Ketemu di indeks " + indeksHasilCari);
		}
		System.out.println();
	}
}
