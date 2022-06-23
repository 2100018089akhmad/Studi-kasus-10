#include "../base.h"
using namespace std;

void LOMBA::input(){
  cout << "Masukkan Banyak Data : ";
  cin>>n;
    for (int i=0; i<n; i++){
      cout << "Masukkan Nama Finalis : ";
      cin >> Nama[i];
      cout << "Masukkan NIM : ";
      cin >> Nim[i];
    }
}

int main{
  LOMBA w;
  w.input();
}