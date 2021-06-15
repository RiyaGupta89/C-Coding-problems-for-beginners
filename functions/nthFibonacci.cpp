#include<iostream>
using namespace std;

int nthFibo(int n) {
    int a = 0,  b = 1, sum=0, temp;
    for(int i=0; i< n-2; i++) {
        sum = a+b;
        temp = b;
        b=sum;
        a=temp;
    }
    return (a+b);
}

int main() {

    int n;
    cin>>n;
    cout<<nthFibo(n)<<endl;

    return 0;
}