//package Array2d;
public class Tambah {
	static int kali1 = 5;
	static int kali2 = 2;

	public static int tambah(int angka1, int angka2) {
		int hasil = angka1 + angka2;

		return hasil;
	}

	public static int kali() {
		int hasil = kali1 * kali2;

		return hasil;
	}
	public static void main(String args[]) {
		System.out.println(tambah(1,2));
		System.out.println(tambah(13,4));
		System.out.println(tambah(3,2));
		System.out.println(tambah(99,21));

		kali1 = 6;
		kali2 = 7;
		System.out.println(kali());
	}
}
