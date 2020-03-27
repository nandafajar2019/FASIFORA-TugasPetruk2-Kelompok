/* 
TUGAS2_PraktikumPetruk_1917051014_1917051026_1917051064_KelasB.
Membuat Implementasi Pointer Array dan Pointer Fungsi dalam C++.

Anggota kelompok :
1. MOHAMMAD FAJAR               (1917051014)
2. CHRISTOFORA DIANA YULIAWATI  (1917051026)
3. SIEVER GEOFREY KALELE       	(1917051064)

Program Transpose Matriks.
*/

#include <iostream>
using namespace std;
void judul (string *pName, string *pTeam)
{
    cout << *pName << endl;
    cout << *pTeam;
}

int main (){
	// nama program
	string name = "PROGRAM TRANSPOSE MATRIKS";
	string *pName = &name;
	string team = "by fajar, christofora, siever";
	string *pTeam = &team;
	judul (pName, pTeam);

	// deklarasi
	int A[100][100]={}, baris, kolom, transpose[100][100];
	int (*pA)[100]=A;

	// baris dan kolom matriks A
        cout << endl << endl << endl;
        cout << "Masukkan jumlah baris matriks A : ";
    	cin >> baris;
    	cout << "Masukkan jumlah kolom matriks A : ";
    	cin >> kolom;
        cout << endl;

    	// matriks A
    	cout << "Masukkan elemen matriks A : " << endl;
    	for (int i=0; i<baris; i++)
    	{
            for (int j=0; j<kolom; j++)
            	{
            		cout << "Masukkan elemen a" << i+1 << j+1 << " : ";
            		cin >> *(*(pA+i)+j);
           	 }
            cout << endl;
    	}
    	cout << "Matriks A = " << endl;
    	for (int i=0; i<baris; i++)
    	{
            for (int j=0; j<kolom; j++)
       		 {
           		 cout << *(*(pA+i)+j) << "\t";
      		  }
            cout << endl;
    	}

	//transpose matriks A
	for (int i=0; i<baris; i++)
	{
		for (int j=0; j<kolom;j++)
		{
			transpose[j][i]=*(*(pA+i)+j);
		}
		cout << endl;
	}
	cout << "Transpose Matriks A = "<< endl;
	for (int i=0; i<baris; i++)
	{
	    for (int j=0; j<kolom; j++)
        	{
            		cout << transpose[i][j] << "\t";
       		}
	cout <<endl;
  	}	
 cout<<"Lokasi Transpose Matriks: "<<endl;
    for(int i=0;i<kolom;i++)
	{
        for(int j=0;j<kolom;j++)
		{
          		cout<<&(transpose[i][j])<<" ";
           		if(j==baris-1)
               		cout<<endl;
       		 }
    }

	return 0;
}
