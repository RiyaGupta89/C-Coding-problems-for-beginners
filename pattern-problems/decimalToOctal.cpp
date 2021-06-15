// Converting from decimal to octal.
#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;
    int octalNum[100];
    int i=0;
    while(n!=0) {
        octalNum[i] = n%8;
        n= n/8;
        i++;
    }

//  Printing elements of octalnum array in reverse order
    for(int j=i-1; j>=0; j--) {
        cout<<octalNum[j];
    }

    return 0;
}