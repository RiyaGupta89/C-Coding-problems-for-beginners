#include<iostream>
#include<math.h>
using namespace std;



bool isArmstrong(int n) {

     int noOfDigit = 0;
    while(n>0) {
        noOfDigit++;
        n/=10;
    }


    int temp = n;
    int sum=0;
    while(n>0) {
        int rem = n%10;
        sum += pow(rem, noOfDigit);
        n= n/10;
    }
    return temp == sum;
   
}

int main() {

    int n;
    cin>>n;
    cout<<isArmstrong(n)<<endl;

    return 0;
}