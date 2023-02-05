#include <iostream>
const int MAX = 100;
using namespace std;

int main(int argc, char const *argv[])
{
    double A[MAX], B[MAX];
    int nA, nB, i;
    do {
        cout<<"Enter the array A number of element < "<<MAX<<": ";
        cin>>nA;
    } while(nA<0 || nA>MAX);
    for(i=0; i<nA; i++) {
        cout<<"A["<<i<<"]=";
        cin>>A[i];
        if(A[i] >= 0) B[nB++] = A[i];
    }
    cout<<"B array:"<<endl;
    for(i=0; i<nB; i++) {
        cout<<"B["<<i<<"]="<<B[i]<<endl;
    }

    return 0;
}
