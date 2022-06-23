#include <iostream>
using namespace std;

class LOMBA
{
  friend istream operator>>(istream &, LOMBA &);
  friend ostream operator<<(ostream &, LOMBA &);

  public : 
    void input();
    void proses();
    void output();

  private : 
    int n;
    int *nim;
    int Nim[100];
    string *nama;
    string Nama[100];
};

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

void LOMBA::proses()
{
  nim = new int[n];
  nama = new string[n];
  for (int i=0; i<n; i++)
    {
      *nama = Nama[i];
      nama +=1;
      *nim = Nim[i];
      nim += 1;
    }
}

void LOMBA::output(){
    nim = nim-n; 
    nama = nama-n;
    cout << endl;
    cout << "==================="<<endl;
    cout << "||Data Mahasiswa ||"<<endl;
    cout << "==================="<<endl;
    for (int i=0; i<n; i++) {
      cout << "\nNama ke-" << i+1 << " : ";
      cout << *nama ;
      nama += 1;
      cout << "\nNim : " ;
      cout << *nim ;
      nim += 1;
      cout<<endl;
  }
}