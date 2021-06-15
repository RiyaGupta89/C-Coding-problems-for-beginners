// Print all the numbers before the cumulative sum become negative.

#include<iostream>
using namespace std;

int main() {

    int n;
    int sum = 0;
    while(true) {

        cin>>n;
        sum = sum + n;
        if(sum >= 0) {
            cout<<n<<endl;
        }
        else {
            break;
        }

    }
    return 0;
}