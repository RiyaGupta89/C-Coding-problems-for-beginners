// Two pointer approach

#include<iostream>
using namespace std;

int main() {

    int a[]={1, 3, 5, 7, 10, 11, 12, 13};

    int s = 16;
    int i=0;
    int j=sizeof(a)/sizeof(int);

    while(i<j) {
        int currSum = a[i]+a[j];
        if(currSum>s) {
            j--;
        }
        else if(currSum<s) {
            i++;
        }
        else if(currSum == s) {
            cout<<a[i]<<" and "<<a[j]<<endl;
            i++;
            j--;
        }
    }

    return 0;
}