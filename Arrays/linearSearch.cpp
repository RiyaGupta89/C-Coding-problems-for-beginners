#include<iostream>
using namespace std;

int main() {

    int a[1000];
    int i;
    int n;
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }
    int key;
    cin>>key;
    for(i=0; i<n; i++) {
        if(a[i]==key) {
            cout<<"Element found at "<<i;
            break;
        } 
    }
    if(i == n) {
        cout<<"Element not found";
    }
}