
/*
                                            Fibonacci Pattern
                                            0 
                                            1 1 
                                            2 3 5 
                                            8 13 21 34

*/


#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;
    int a=0, b=1;
    int sum = 0, temp;
    for(int i=0;i<n;i++) {
        for(int j=0; j<=i; j++) {

        cout<<a<<" ";
        sum = a+b;
            temp = b;
            b = sum;
            a = temp;
        }
    cout<<endl;
    }


    return 0;
}