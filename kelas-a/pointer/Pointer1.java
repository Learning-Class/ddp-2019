//package Array2d;
class Mahasiswa {
	public String nama;
	public int nim;

	public void setNama(String nama) {
		this.nama = nama;
	}

	public String getNama() {
		return this.nama;
	}

	public void setNim(int nim) {
		this.nim = nim;
	}

	public int getNim() {
		return this.nim;
	}

}
public class Pointer1 {
	public static void main(String args[]) {
		Mahasiswa m1;
		m1 = new Mahasiswa();

		m1.setNama("andi");
		m1.setNim(1);

		Mahasiswa m2;
		m2 = m1;

		m2.setNama("budi");
		m2.setNim(99);

		System.out.println("Nama : " + m1.getNama());
		System.out.println("NIM : " + m1.getNim());
	}
}
