#include<iostream>
#include<math.h>
using namespace std;

int main() {

    int n;
    cin>>n;
    int sum = 0;
    int val=0;
    while(n>0) {
        int rem = n%10;
        sum += rem* pow(2,val);
        val++;
        n= n/10;
    }
    cout<<sum<<endl;

    return 0;
}