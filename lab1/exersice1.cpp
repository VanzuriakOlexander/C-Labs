#include <iostream>
const int MAX = 100;
using namespace std;

int main(int argc, char const *argv[])
{
    double A[MAX], B[MAX];
    int nA, nB;
    do {
        cout << "Enter the array A number of element < " << MAX << ": ";
        cin >> nA;
    } while (nA < 0 || nA > MAX);
    
    for (int i = 0; i < nA; i++) {
        cout << "A[" << i << "]=";
        cin >> A[i];
        if (A[i] >= 0) {
            B[nB++] = A[i];
        }
    }
    if (nB) {
        cout << "B array:" << endl;
        for (int i = 0; i < nB; i++) {
            cout << "B[" << i << "]=" << B[i] << endl;
        }
    } else {
        cout << "B array has no elements";
    }

    return 0;
}
