#include<iostream>
using namespace std;
//deklarasi struct matkul, dengan array 10
struct matkul{
	string nama;
	int sks;
} matkul[10];

main()
{

matkul[0].nama="wardah"; //mengisi array of struct matkul indeks ke 0
matkul[0].sks=3;
std::cout << matkul[0].nama << '\n'; //menampilkan variabel nama pada array of struct matkul indeks ke 0
}
