/* Membuat Program untuk memproses array 1 dimensi dan terdiri dari 2 Prosedur dan 2 Fungsi yaitu
	a. isiNilai (int a, int n )
	b. CetakNilai (int a, int n )
	c. isFound (int a, int n, int x)
	d. cariIndexArray (int a, int n, int x)
oleh Ahmad Solahudin Rifandi (11190910000101)
Tanggal 25 Oktober 2019
*/

#include <iostream>
using namespace std;

void isiNilai (int a[], int n);
void cetakNilai (int a[], int n);
bool isFound (int a[], int n, int x );
int cariIndexArray (int a[], int n, int x);


int main ()
{

	int x, n, nilai;
	int cariAngka = 0, index = 0;
	int a[n];
	bool isKetemu = true;

	cout << "Program Array 1 Dimensi dengan Prosedur dan Fungsi. \n \n";

	cout << "Masukan Jumlah Array : ";
	cin >> n;

	isiNilai (a, n);


	cout << "Masukan Nilai x : ";
	cin >> x;
	isKetemu = isFound (a, n, x);

	cout << "\n \n";
	if (isKetemu == true)
	{
		cout << "Nilai " << x << " ada di dalam array.\n " << endl;
	}
	else
	{
		cout << "Nilai " << x << " tidak ada dalam array.\n " << endl;


	}


	cout << "Masukan Nilai yang ingin dicari : ";
	cin >> nilai;

	cariAngka = cariIndexArray (a, nilai, n);
	cetakNilai (a, n);

	return 0;
}

void isiNilai (int a[], int n)
{

	for (int i = 0 ; i < n; i++)
	{
		cout << "Masukan Nilai ke " << i << " : ";
		cin >> a[i];

	}
	cout << "\n \n";

}
void cetakNilai (int a[], int n)
{
	for (int i = 0; i <= n ; i ++)
	{
		cout << "Index [" << i <<  "]" << " = " << a[i] << endl;
	}
	cout << endl;
}

bool isFound (int a[], int n, int x)
{
	bool sa = false;

	for (int i = 0 ; i < n; i++)
	{
		if (x == a[i])
		{
			sa = true;
		}
	}
	return sa;
}

int cariIndexArray (int a[], int nilai, int n)
{

	int cariAngka, index;
	for (int i = 0; i < n; i++)
	{
		if (nilai == a[i])
		{
			cariAngka = nilai;
			index = i;
		}
	}

	if (nilai == cariAngka)
	{
		cout <<"\nNilai " << nilai << " ditemukan di index [" << index <<"]\n" << endl;
	}
	else
	{
		cout << endl;
		cout << "-99" << endl;
	}
	return cariAngka;
}
