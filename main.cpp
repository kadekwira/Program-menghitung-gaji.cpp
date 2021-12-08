#include <iostream>

using namespace std;

int main()
{
    cout<<"-------------------"<<endl;
    cout<<"MENGHITUNG GAJI KARYAWAN"<<endl;
    cout<<"=========================="<<endl;

    //deklarasi
    string nama;
    char jabatan;
    int jam_kerja,gaji_per_jam,total_gaji;

    //input data
    cout<<"NAMA KARYAWAN: ";
    getline(cin,nama);

    cout<<"JABATAN"<<"A=direk,B=ast,C=boss.  : ";
    cin>>jabatan;

    cout<<"JUMLAH JAM KERJA: ";
    cin>>jam_kerja;

    switch(jabatan)
    {
    case 'A':
        gaji_per_jam=20000;
        break;
    case 'B':
        gaji_per_jam=25000;
        break;
    case 'C':
        gaji_per_jam=30000;
        break;
    }
    total_gaji=jam_kerja*gaji_per_jam;

    cout<<nama<<endl;
    cout<<jabatan<<endl;
    cout<<"Total gaji yang di dapat: "<<total_gaji;

    return 0;
}
