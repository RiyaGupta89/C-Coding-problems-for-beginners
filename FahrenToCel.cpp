#include<iostream>
using namespace std;

int main() {

    int minF, maxF;
    cin>>minF>>maxF;
    int step;
    cin>>step;
    int cel;
    while(minF<=maxF) {
        cel = 5*(minF - 32)/9;
        cout<<minF<<"\t"<<cel<<endl;
        minF = minF + step;
    }

    return 0;
}