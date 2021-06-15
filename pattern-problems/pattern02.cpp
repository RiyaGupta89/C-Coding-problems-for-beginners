/*
                                    1
                                   232
                                  34543
                                 4567654
                                567898765
*/

#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;
    int counter;
    for(int i=1; i<=n; i++) {
        for(int j=1;  j<=n-i; j++) {
            cout<< " ";
        }
        
            counter = i;
        for(int j=1; j<=2*i-1; j++) {
            cout<<counter;
            if(j>i-1) {
                counter--;
            } else {
                counter++;
            }
        }
        cout<<endl;
    }

    return 0;
}