#include<iostream>
#include<cstring>
using namespace std;



int main() {

    char a[1000];
    cin.getline(a, 1000);
    int l = strlen(a);
    if(l==1 | l==0) {
        cout<<a;
    }
    int prev =0;
    for(int current = 1; current < l; current++) {
        if(a[prev] != a[current]) {
            prev++;
            a[prev] = a[current];
        }
    }
    a[prev+1] = '\0';
   
    cout<<a<<endl;

    return 0;
}