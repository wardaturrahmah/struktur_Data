#include<iostream>
using namespace std;
int top=-1;
int maks=4;
string tumpukan[4];
//prosedur untuk mengisi tumpukan data
void push(string nama)
{
  if(top>=maks-1)
  {
    cout << "data sudah penuh";
  }
  else
  {
    top=top+1;
    tumpukan[top]=nama;
  }
}
//prosedur untuk mengeluarkan tumpukan
void pop()
{
  if(top>=0)
  {
    cout<< tumpukan[top]<<endl;
    top=top-1;
  }
  else
  {
    cout << "tumpukan kosong";

  }
}
main()
{
  int pil,i;
  string nama;
  while(1){
  cout<<"pilihan\n 1. Input \n 2. Output \n 3. Output semua array \n Masukkan Pilihan ";
  cin >> pil;

  if(pil==1)
  {
    cout<<"masukkan nama : ";
    cin >> nama;
    push(nama);
  }
  else if(pil==2)
  {
    pop();
  }
  else
  {
    for(i=0;i<=top;i++)
    {
      //cout<<top;
      cout<<tumpukan[i];
    }
    cout << "\n";
  }
}
}
