#include <iostream>
using namespace std;

int main()
{
    char nama[20], prodi[30], nim[10], tanggal_lahir[20], alamat[20];
    double no_hp;

    cout << "===================================== " << endl;
    cout << "=           RAFLI WAHYUDI           = " << endl;
    cout << "===================================== " << endl;
    cout << "                                    " << endl;
    cout << "                                    " << endl;
    cout << "                                    " << endl;
    cout << "============= INPUT DATA DIRI =============" << endl;
    cout << "Silahkan Masukan Nama           :"; cin.getline(nama,20);
    cout << "Silahkan Masukan NIM            :"; cin.getline(nim,10);
    cout << "Silahkan Masukan Program Studi  :"; cin.getline(prodi,30);
    cout << "Silahkan Masukan Tanggal Lahir  :"; cin.getline(tanggal_lahir, 20);
    cout << "Silahkan Masukan Alamat         :"; cin.getline(alamat, 20);
    cout << "Silahkan Masukan No Handphone   :"; cin >> no_hp;
    cout << "                                    " << endl;
    cout << "============= INFORMASI DATA DIRI =============" << endl;
    cout << "Nama           :"<< nama;
    cout << endl;
    cout << "NIM            :"<< nim;
    cout << endl;
    cout << "Program Studi  :"<< prodi;
    cout << endl;
    cout << "Tanggal Lahir  :"<< tanggal_lahir;
    cout << endl;
    cout << "Alamat         :"<< alamat;
    cout << endl;
    cout << "No Handphone   :"<< no_hp;
    cout << endl;

 return 0;
}
