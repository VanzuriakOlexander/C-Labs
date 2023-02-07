#include <iostream>
const int MAX = 100;
using namespace std;

int main(int argc, char const *argv[])
{
    double A[MAX], *pA, max = 0, T;
    int nA, number = -1;
    do {
        cout << "Enter the array A number of element < " << MAX << ": ";
        cin >> nA;
    } while (nA < 0 || nA > MAX);

    for (int i = 0; i < nA; i++) {
        cout << "A[" << i << "]=";
        cin >> A[i];
    }

    cout << "Enter the T number:";
    cin >> T;
    pA = A;

    for (int i = 0; i < nA; i++) {
        if (*(pA + i) > T && *(pA + i) >= max && *(pA + i) >= 0)
        {
            max = *(pA + i);
            number = i;
        }
    }
    
    if (number != -1) {
        cout << "The number of last element higher than T: " << number;
    } else {
        cout << "Number not found" << endl;
    }
    
    return 0;
}