#include <iostream>
using namespace std;

int arr[20];	// Membuat Array dengan panjang data 20
int n;			// Membuat Variable

void input() {	// Procedure Input
	while (true)
	{
		cout << "Masukkan Jumlah Data pada Array : ";	// Membuat Inputan jumlah element Array
		cin >> n;										// Memanggil varible inputan n

		if (n <= 20) {									// Membuat kondisi n tidak lebih dari 20
			break;
		}
		else
		{
			cout << "\n Array yang anda masukkan maksimal 20 Elemen. \n"; // Menampilkan pesan jika data lebih dari 20
		}
	}

