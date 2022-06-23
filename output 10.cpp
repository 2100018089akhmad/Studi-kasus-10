#include "../base.h"
using namespace std;

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

int main(){
  LOMBA w;
  w.output();
}