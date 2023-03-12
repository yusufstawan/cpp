#include <iostream>

using namespace std;

int main()
{
  string nama;
  int umur;

  cout << "Masukkan nama: ";
  getline(cin, nama);

  cout << "Masukkan umur: ";
  cin >> umur;

  cout << "Nama: " << nama << endl;
  cout << "Umur: " << umur << endl;

  return 0;
}
