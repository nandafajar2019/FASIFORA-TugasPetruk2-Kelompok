/* 
TUGAS2_PraktikumPetruk_1917051014_1917051026_1917051064_KelasB.
Membuat Implementasi Pointer Array dan Pointer Fungsi dalam C++.

Anggota kelompok :
1. Mohammad Fajar               (1917051014)
2. Christofora Diana Yuliawati  (1917051026)
3. Siever Geoffrey Kalele       (1917051064)

Program Transpose Matriks.
*/

#include <iostream>
using namespace std;
void judul (string *pName)
	{
		cout << *pName;
	}
int main (){
	string name = "PROGRAM TRANSPOSE MATRIKS";
	string *pName = &name;
	judul (pName);
	int A[100][100]={}, baris, kolom, transpose[100][100];
	int (*pA)[100]=A;
	cout << endl << endl << endl;
	cout << "Masukkan jumlah baris matriks : ";
    cin >> baris;
    cout << "Masukkan jumlah kolom matriks : ";

// belum revisi
