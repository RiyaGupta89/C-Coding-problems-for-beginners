//Simple Interest Program
//This is a comment which is ignored by the compiler

#include<iostream>
using namespace std;

int main() {

    int p, r, t;
    float si;
    cout<<"Enter principal, rate and time to calculate simple interest."<<endl;
    cin>>p>>r>>t;
    si = (p*r*t)/100.0;
    cout<<"The Simple Interest is "<<si;

    return 0;
}



/*
integer/integer = integer
integer/float = float
float/integer = float
*/