#include<iostream>
using namespace std;

int noOfDigit(int num, int digit) {
    int count = 0;
    while(num>0) {
        int rem = num%10;
        if(rem == digit) {
            count++;
        }
        num = num/10;
    }
    return count;
}

int main() {

    int num;
    int digit;
    cin>>num;
    cin>>digit;
    cout<<noOfDigit(num, digit)<<endl;

    return 0;
}