#include<iostream>
using namespace std
;
int main ()
{

int angka, spasi, bintang, a;
    cout << " Masukkan Angka : ";
    cin >> a;

    for(angka=1;angka<=a;angka++) {
        for(spasi=1;spasi<=angka;spasi++) {
          cout << " *";
        }
        cout << endl;
    }

 return 0;
}
