#include "../base.h"
using namespace std;

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

int main()
{
  LOMBA w;
  w.input();
}