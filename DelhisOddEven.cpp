#include<iostream>
using namespace std;

int main() {

    int N;
    cin>>N;
    int no;
    int sum;
    for(int i=0; i<N; i++) {
        sum = 0;
        cin>>no;
        while(no>0) {

            int rem = no%10;
            sum += rem;
            no = no/10;

         }
         if(sum%2 == 0) {
             (sum%4 == 0)?cout<<"Yes":cout<<"No";
         } else {
             (sum%3 == 0)?cout<<"Yes":cout<<"No";
         }
    }

    return 0;
}