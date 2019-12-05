#include <iostream>
using namespace std;
const int MAX = 5;
int main() {
    cout << "===================================== \n" << endl;
    cout << "=            RAFLI WAHYUDI          = \n" << endl;
    cout << "===================================== \n" << endl;

int A[MAX];
for (int C =0; C < MAX; C++)
{
    A[C] = C * 10;
}
for (int C =0; C < MAX; C++)
{
    cout << A[C] << endl;
}
return 0;
}

