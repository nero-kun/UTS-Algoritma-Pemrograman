#include<iostream>
using namespace std;
int main()
{

    float nama, npm, absensi, tugas, uts, uas, nilai_akhir;
    char nilai_huruf;

    cout<<"Pemrograman Menghitung Nilai Akhir Mahasiswa"<<endl;
    cout<<"============================================"<<endl;

    //Proses Input
    cout<<"Nama : Mahardika Sheva Anggito"<<endl;
    cout<<"NPM : 2410631170081"<<endl;
    cout<<endl;
    cout<<"============================================"<<endl<<endl;

    cout<<"Nilai Absensi : ";
    cin>>absensi;

    cout<<"Nilai Tugas : ";
    cin>>tugas;

    cout<<"Nilai UTS : ";
    cin>>uts;

    cout<<"Nilai UAS : ";
    cin>>uas;

    nilai_akhir = ((absensi*0.1)+(tugas*0.2)+(uts*0.3)+(uas*0.4));

    if (nilai_akhir>=85 && nilai_akhir<=100){
        nilai_huruf= 'A';
    }else if (nilai_akhir>=80 && nilai_akhir<85){
        nilai_huruf= 'B';
    }else if (nilai_akhir>=75 && nilai_akhir<80){
        nilai_huruf= 'C';
    }else if (nilai_akhir>=70 && nilai_akhir<75){
        nilai_huruf= 'D';
    }else if (nilai_akhir<70){
        nilai_huruf='E';
    }

    cout<<endl;
    cout<<"Nilai Akhir :"<<nilai_akhir<<endl;
    cout<<"Nilai Huruf :"<<nilai_huruf<<endl;


}
