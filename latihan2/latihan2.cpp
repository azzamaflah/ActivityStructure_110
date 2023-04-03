#include <iostream>
using namespace std;

struct AlamatDetail
{
    string desa;
    string kota;
};

struct Mahasiswa
{
    string NIM;
    string nama;
    AlamatDetail alamat;
    int umur;
};

int main()
{
    Mahasiswa mhs;

    cout << "Masukan NIM : ";
    cin >> mhs.NIM;
    cout << "Masukan Nama : ";
    cin >> mhs.nama;
    cout << "alamat : "; 
    cout << "\n\tMasukan Desa : ";
    cin >> mhs.alamat.desa;
    cout << "\tMasukan kota : ";
    cin >> mhs.alamat.kota;
    cout << "masukan Umur : ";
    cin >> mhs.umur;
    
    cout << "\n\nNIM = " << mhs.NIM;
    cout << "\nNama = " << mhs.nama;
    cout << "\nDesa = " << mhs.alamat.desa;
    cout << "\nKota = " << mhs.alamat.kota;
    cout << "\n\nUmur = " << mhs.umur;
}
