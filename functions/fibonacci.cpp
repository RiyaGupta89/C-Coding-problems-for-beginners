#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;
    int a=0, b=1, sum, temp;
    for(int i=0; i<n; i++) {
        sum = a+b;
        cout<<", "<<a;
        temp = b;
        b = sum;
        a = temp;
    }

    return 0;

}