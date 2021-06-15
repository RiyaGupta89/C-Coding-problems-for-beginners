#include<iostream>
using namespace std;

int main() {

    int n,p;
    cin>>n>>p;
    int inc = 1.0;
    int ans = 0;
    for(int i=0; i<=p; i++) {

        while(ans*ans <= n) {
            ans = ans+inc;
        }
        
        ans = ans-1;
        inc = inc/10;
     }
    cout<<ans<<endl;
    return 0;
}