#include<iostream>
using namespace std;

int main() {

    int n1, n2;
    cin>>n1>>n2;

    int count = 0;
    int n=1;
    while(count<n1) {

        int ans = 3*n+2;
        if(ans%n2 != 0) {
            cout<<ans<<endl;
            count++;
        }
        n++;
    }


    return 0;
}