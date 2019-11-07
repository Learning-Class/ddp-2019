//package Array2d;
public class Array2d {

	public static void main(String args[]) {
		int BARIS = 2;
		int KOLOM = 2;
		int matriks[][] = new int[BARIS][KOLOM];
		matriks[0][0] = 1;
		matriks[0][1] = 2;
		matriks[1][0] = 3;
		matriks[1][1] = 4;
		int i, j;
		for(i = 0; i < BARIS; i++) {
			for(j = 0; j < KOLOM; j++) {
				System.out.print(matriks[i][j]);
			}
			System.out.println();
		}
		//System.out.println("test");
	}
}
