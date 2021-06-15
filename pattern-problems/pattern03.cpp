/*


0
10
010
1010
01010

*/


#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;
    int val;
    for(int i=1; i<=n; i++) {
            val = (i%2==0)?1:0;
        for(int j=1; j<=i; j++) {
            cout<<val;
            val = 1 - val;
        }
        cout<<endl;
    }
    return 0;
}