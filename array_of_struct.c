#include<iostream>
using namespace std;
struct matkul{
	string nama;
	int sks;
	int uas;
	int uts;
	int nas;

} matkul[10];

main()
{

matkul[0].nama="wardah"; //mengisi array of struct matkul indeks ke 0
matkul[0].sks=3;
std::cout << matkul[0].nama << '\n'; //menampilkan array of struct matkul indeks ke 0
}
