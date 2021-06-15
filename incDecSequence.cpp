#include<iostream>
using namespace std;

int main() {

        int N;
        cin>>N;
        int S[N];

        for(int i=0; i<N; i++) {
            cin>>S[i];
        }
        int i=0;
        while(i<N) {
            if(S[i+1]>S[i]) {
                i++;
            } else {
                cout<<"False"<<endl;
                break;
            }
        }
        if(i==N) {
            cout<<"True"<<endl;
        }     

    return 0;
}