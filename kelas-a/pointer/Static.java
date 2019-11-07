class Asal {
	public static String variabelStatik;
	public String variabelObjek;

	public static void methodStatic() {
		System.out.println(variabelStatik);
		System.out.println("Method statik sama seperti variabel statik");
		System.out.println("Method statik tidak bisa mengakses variabel objek (non-static)");
		//Dibawah ini pasti akan error karena objek belum dibuat
		//Non static variabel cannot referenced from static method

		//System.out.println(this.variabelObjek);
		//System.out.println(variabelObjek);

		//Dibawah ini tidak akan error karena objek sudah dibuat

		Asal z = new Asal();
		z.variabelObjek = "lsdjfkdsf";
	}

	public void apaItuThis(String variabelObjek) {
		// This mereferensikan variabel pada kelas (variabel kelas)
		// Misal jika ada 2 varibel namanya sama. Jika ditambah this maka
		// akan menunjuk ke variabel yang beda
		// this.variabelObjek == variabel objek yang di class
		// variabelObjek == variabel objek dari parameter method/fungsi
		this.variabelObjek = variabelObjek;
	}
}
public class Static {
	public static void main(String args[]) {
		Asal.variabelStatik = "Variabel static ada sebelum objek dibuat";
		Asal.variabelStatik = "Variabel static itu diakses di kelas";

		Asal a1 = new Asal();

		a1.variabelStatik = "Variabel static bisa juga diakes di objek";
		a1.variabelStatik = "XXXXX";
		a1.variabelObjek = "Variabel objek bisa diakses setelah objek dibuat";

		Asal a2 = new Asal();
		Asal a3 = new Asal();

		a2.variabelObjek = "222222222222222";
		a2.variabelStatik = "pada variabel static, semua objek mengarah pada 1 variabel static";

		a3.variabelObjek = "333333333";

		System.out.println("a1.variabelObjek : " + a1.variabelObjek);
		System.out.println("a1.variabelStatik : " + a1.variabelStatik);
		System.out.println();

		System.out.println("a2.variabelObjek : " + a2.variabelObjek);
		System.out.println("a2.variabelStatik : " + a2.variabelStatik);
		System.out.println();

		System.out.println("a3.variabelObjek : " + a3.variabelObjek);
		System.out.println("a3.variabelStatik : " + a3.variabelStatik);
		System.out.println();
	}
}

