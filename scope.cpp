//Scope ( defined for variables -> lifetime and visibility )

// ->Local scope  (can also be used in the local scope)
// ->Global scope  (can be used anywhere in the program if that is not defined in the local scope)

#include<iostream>
using namespace std;


int x=100;

int main() {

    int x=10;

    // :: -> This is the scope resolution.
    cout<<::x<<endl;
    cout<<x;

    return 0;
}

