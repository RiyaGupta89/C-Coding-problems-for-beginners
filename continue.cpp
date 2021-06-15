//Continue Statement skips that process and goes back to the start of the loop.

#include<iostream>
using namespace std;

int main() {
    int no;
    while(true) {
        cin>>no;
        if(no%7==0) {
            continue;
        }
        cout<<no<<endl;
    }

    return 0;
}