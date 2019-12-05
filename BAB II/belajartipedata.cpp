#include <iostream>
using namespace std;

int main() {
    cout << "===================================== \n" << endl;
    cout << "=       BELAJAR TIPE DATA           = \n" << endl;
    cout << "=         RAFLI WAHYUDI             = \n" << endl;
    cout << "===================================== \n" << endl;

    int x;
    x = 100;
    cout << "Contoh Nilai Tipe Bilangan Bulat = " << x << endl << endl;

    double y;
    y=123456789098;
    cout << "Contoh Nilai Tipe Bilangan Riil = " << y << endl << endl;

    char karakter  = 'A';
    char* teks = "Kata-kata";
    char TEKS[39] = "Teks Dengan 39 karakter";

    cout << karakter << endl;
    cout << teks << endl;
    cout << TEKS << endl;

    return 0;
}
