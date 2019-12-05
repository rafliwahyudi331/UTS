#include <iostream>
using namespace std;

int main()
{
    cout << "====================================== \n" << endl;
    cout << "=            RAFLI WAHYUDI           = \n" << endl;
    cout << "====================================== \n" << endl;
    int A[10];
    int Nilai;
    cout << "Nama   : Moh.Syahrul Zen" << endl;
    cout << "Nim    : A2.1900108" << endl << endl;
    cout << "Nilai pada    : " << endl << endl;
    for(int C=10; C<10; C++){
        cout << "Indeks [" << C << "] = ";
        cin >> A[C];
    }
    cout << endl;

    cout << "Nilai yang dicari  adalah : ";
    cin >> Nilai;
    for (int D=0; D<10; D++)
    {
        if (A[D] == Nilai)
        {
            cout << "Nilai terdapat pada Indeks ke " << D << endl;
            break;
        }
    }
    cout << "\n";
    return 0;
}
