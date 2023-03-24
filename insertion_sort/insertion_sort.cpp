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
	cout << endl;
	cout << "=====================" << endl;	// Menampilkan jarak per baris progam
	cout << "Masukkan Elemen Array" << endl;	// Menampilkan tampilan susunan data elemen array
	cout << "=====================" << endl;

	for (int i = 0; i < n; i++)					// Menggunakan perulangan for untuk menyimpan data pada array
	{
		cout << "Data ke-" << (i + 1) << ": ";	// Memasukkan atau menginputkan nilai data n
		cin >> arr[i];							// Menyimpan nilai data n kedalam array arr
	}
}

void insertionsort() {	// Procedure Insertionsort

	int temp;			// Membuat variabel data temporer atau penyimpanan sementara
	int j;				// Membuat variable j sebagai penanda

	for (int i = 1; i < n; i++) {	// 1. Looping dengan i dimulai dari 1 hingga n-1

		temp = arr[i];				// 2. Simpan nilai arr[i] ke variable sementara temp

		j = i - 1;					// 3. setting nilai j sama dengan i-1
	}
}

