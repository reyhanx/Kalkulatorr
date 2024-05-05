#include <iostream>

using namespace std;

double angka1;
double angka2;

void penjumlahan()
{
	cout << "Masukan angka:";
	cin >> angka1;
	cout << "Masukan angka:";
	cin >> angka2;
	cout << "Hasil :" << angka1 + angka2;
	cout << endl;
}

void perkalian()
{
	cout << "Masukan Angka Pertama : ";
	cin >> angka1;
	cout << "Masukan Angka Kedua : ";
	cin >> angka2;
	cout << "Hasil : " << angka1 * angka2;
	cout << endl;
}

void pembagian()
{
	cout << "Masukkan angka yang ingin dibagi : ";
	cin >> angka1;
	cout << "Masukkan angka pembagi : ";
	cin >> angka2;
	cout << "Hasil : " << angka1 / angka2;
	cout << endl;
}

void pengurangan()
{
	cout << "Masukkan bilangan : ";
	cin >> angka1;
	cout << "Masukkan bilangan : ";
	cin >> angka2;
	cout << "hasil pengurangan : " << angka1 - angka2;
	cout << endl;
}

void keliling_pp()
{
	cout << "Masukkan Panjang : ";
	cin >> angka1;
	cout << "Masukkan Lebar : ";
	cin >> angka2;
	cout << "hasil pengurangan : " << 2 * (angka1 + angka2);
	cout << endl;
}

int main()
{
	int pilihan;
	char ulang;
	
	do
	{
		cout << "=========== KALKULATOR ===========" << endl;
		cout << "Muhammad Reyhan Fajri\n";
		cout << "202312007\n";
		cout << "Teknik Elektro\n";
		cout << "Pemprograman Komputer\n";
		cout << "==================================" << endl;
		cout << "1. Penjumlahan" << endl;
		cout << "2. Perkalian" << endl;
		cout << "3. Pembagian" << endl;
		cout << "4. Pengurangan" << endl;
		cout << "5. Keliling Persegi Panjang" << endl;
		cout << endl;

		cout << "Pilih Metode :";
		cin >> pilihan;

		switch (pilihan)
		{
		case 1:
		{
			penjumlahan();
			break;
		}

		case 2:
		{
			perkalian();
			break;
		}

		case 3:
		{
			pembagian();
			break;
		}
		case 4:
		{
			pengurangan();
			break;
		}
		case 5:
		{
			keliling_pp();
			break;
		}
		default:
			cout << "Pilihan tidak tersedia" << endl;
		}
		cout << endl;

		cout << "Ingin menggunakan kalkulator lagi? (y/t)? ";
		cin >> ulang;
		cout << endl;

	} while (ulang != 't');

	cout << "Terimakasih...";

	cout << endl;
	return 0;
}
