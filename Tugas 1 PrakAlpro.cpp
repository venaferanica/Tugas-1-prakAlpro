// Tugas 1 PrakAlpro.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int nim;
	string nama;
	char plug;
	cout << "Masukkan : " << endl;
	cout << "Nama      : "; cin >> nama;
	cout << "NIM       : "; cin >> nim;
	cout << "Plug      : "; cin >> plug;
	cout << "Inilah data Anda : " << endl;
	cout << "Nama      : " << nama << endl;
	cout << "NIM       : " << nim << endl;
	cout << "Plug      : " << plug << endl;

	cout << "Dalam bentuk tabel : " << endl;
	cout << "====================================================" << endl;
	cout << setw(7) << "NIM" << setw(5); cout << "|"; cout << setw(7) << "Nama" << setw(5); cout << "|"; cout << setw(7) << "Plug" << setw(5) << endl;
	cout << "====================================================" << endl;
	cout << setw(7) << nim << setw(5); cout << "|"; cout << setw(7) << nama << setw(5); cout << "|"; cout << setw(7) << plug << setw(5) << endl;
	cout << "----------------------------------------------------";

	return 0;
}