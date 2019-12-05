#include <iostream>
using namespace std;

int main()
{
    cout << "====================================== \n" << endl;
    cout << "=             RAFLI WAHYUDI          = \n" << endl;
    cout << "====================================== \n" << endl;
    char NAMAKU [9] = {'K', 'A', 'N', 'G', 'Y', 'O', 'G', 'A', '\0'};
    char NAMAMU [6] = "YOGA";

    for (int C=0; C<6; C++)
    {
        cout << NAMAKU [C];
    }
    cout << endl;

    cout << NAMAMU;

    cout << endl << endl;

    cout << "Jumlah Elemen NAMAKU : " << sizeof (NAMAKU) << endl;

    cout << "Jumlah Elemen NAMAMU : " << sizeof (NAMAMU) << endl << endl;

    return 0;

}
