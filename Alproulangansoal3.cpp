#include<iostream>
using namespace std;
int main ()
{
    int a,b,kali,bagi,tambah,kurang,mdls;
    cout<<"Program Operasi Matematika"<<endl;
    cout<<"Masukkan Nilai A : ";
    cin>>a;

    cout<<"Masukkan Nilai B : ";
    cin>>b;
    cout<<endl;
    cout<<endl;

    tambah = a + b;
    kurang = a - b;
    kali = a * b;
    bagi = a / b;
    mdls = a % b;

    cout<<"Hasil A + B adalah "<<tambah<<endl;
    cout<<"Hasil A - B adalah "<<kurang<<endl;
    cout<<"Hasil A * B adalah "<<kali<<endl;
    cout<<"Hasil A / B adalah "<<bagi<<endl;
    cout<<"Hasil A % B adalah "<<mdls<<endl;
}
