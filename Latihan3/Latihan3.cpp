#include <iostream>
using namespace std;

struct AlamatDetail
{
    char desa[20];
    char kota[20];
};

struct Mahasiswa
{
    char NIM[12];
    char Nama[25];
    AlamatDetail alamat;
    int umur;
};

int main()
{
    Mahasiswa mhs[3];

    for (int i = 0; i < 3; i++) {
        cout << "Masukan NIM : ";
        cin.getline(mhs[i].NIM, 12);
        cout << "Masukan Nama : ";
        cin.getline(mhs[i].Nama, 25);
        cout << "Alamat : ";
        cout << "\n\tMasukan desa : ";
        cin.getline(mhs[i].alamat.desa, 20);
        cout << "\tMasukan kota : ";
        cin.getline(mhs[i].alamat.kota, 20);
        cout << "Masukan Umur : ";
        cin >> mhs[i].umur;
        cin.ignore(1, '\n');
    }
    
    for (int i = 0; i < 3; i++)
    {
       
        cout << "\n\nNIM =  " << mhs[i].NIM;
        cout << "\nNama = " << mhs[i].Nama;
        cout << "\nDesa = " << mhs[i].alamat.desa;
        cout << "\nKota = " << mhs[i].alamat.kota;
        cout << "\nUmur = " << mhs[i].umur;
    }
}
