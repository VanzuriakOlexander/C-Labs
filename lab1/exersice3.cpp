#include <iostream>
const int MAX = 200;
using namespace std;

int main(int argc, char const *argv[]) {
    double X[MAX], max, min, sum = 0, multiple = 1;
    int a, b, i, nX;

    do {
        cout << "Enter the array X number of element < " << MAX << ": ";
        cin >> nX;
    } while (nX < 0 || nX > MAX);

    cout << "Please enter the a number:";
    cin >> a;
    cout << "Please enter the b number:";
    cin >> b;

    for (i = 0; i < nX; i++) {
        cout << "X[" << i << "]=";
        cin >> X[i];

        if (X[i] < a) {
            sum += X[i];
        }
        else if (X[i] > b) {
            multiple *= X[i];
        }
        else {
            min = X[i];
            max = X[i];
        }
    }

    for (i = 0; i < nX; i++) {
        if (X[i] >= a && X[i] <= b) {
            if (min >= X[i]) {
                min = X[i];
            }
            else if (max <= X[i]) {
                max = X[i];
            };
        };
    };
    cout << "The min number in interval [a, b]: " << min << endl;
    cout << "The max number in interval [a, b]: " << max << endl;
    cout << "The sum of elements low then a: " << sum << endl;
    cout << "The multiple of elements high than b: " << multiple;
}