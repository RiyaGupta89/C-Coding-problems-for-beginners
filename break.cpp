//Break Statement terminates from the loop.

#include<iostream>
using namespace std;

int main() {

    int no;
    while(true) {
        cin>>no;
        if(no%7 == 0) {
            break;
        }
    }

    return 0;
}