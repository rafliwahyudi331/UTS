#include <iostream>
using namespace std;

int main()
{
    cout << "====================================== \n" << endl;
    cout << "= NAMA : RAFLI WAHYUDI               = \n" << endl;
    cout << "= NIM  : A2.1900039                 = \n" << endl;
    cout << "= PRODI: TEKNIK INFORMATIKA          = \n" << endl;
    cout << "= EMAIL: rafliwahyudi331@gmail.com  = \n" << endl;
    cout << "====================================== \n" << endl;

    cout << "********************\n" << endl;
    cout << "LATIHAN INPUT OUTPUT\n" << endl;
    cout << "********************\n" << endl;

    char tampilkan[1];
    char nama[50], alamat[50], tl[50], jk[50], no[50], pekerjaan[50], email[50], website[50];
    cout << "====================================== \n" << endl;
    cout << "=      DAFTAR RIWAYAT HIDUP          = \n" << endl;
    cout << "====================================== \n" << endl;
    cout << "NAMA :";
    cin.getline(nama,50);
    cout << "ALAMAT :";
    cin.getline(alamat,50);
    cout << "TANGGAL LAHIR :";
    cin.getline(tl,50);
    cout << "NO TELPON :";
    cin.getline(no,50);
    cout << "JENIS KELAMIN:";
    cin.getline(jk,50);
    cout << "PEKERJAAN :";
    cin.getline(pekerjaan,50);
    cout << "EMAIL :";
    cin.getline(email,50);
    cout << "WEBSITE :";
    cin.getline(website,50);
    cout << "JURUSAN : TEKNIK INFORMATIKA STMIK SUMEDANG";
    cin.getline(tampilkan,1);
    return 0;
}
