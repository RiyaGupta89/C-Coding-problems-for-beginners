/*
                                    1
                                    11
                                    111
                                    1001
                                    11111
                                    100001
*/

#include<iostream>
using namespace std;

int main() {

    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    for(int i=1; i<=n; i++) {
        for(int j=1;j<=i;j++) {
            if(i%2 == 0) {
                if(j>1 && j<i){
                    cout<<"0";
                } else {
                    cout<<"1";
                }
            }
            else {
                cout<<"1";
            }
        }
            cout<<endl;
    }

    return 0;
}