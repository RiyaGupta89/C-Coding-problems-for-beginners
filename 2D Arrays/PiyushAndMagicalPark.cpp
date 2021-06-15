/* Hacker Blocks Problem
     . . * .
     . # . .
     * * . . 
     . # * *
*/

#include<iostream>
using namespace std;

void magicalPark(char park[][100], int m, int n, int k, int s) {
    bool success = true;

    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            char ch= park[i][j];
            if(s<k) {
                success = false;
                break;
            }
            if(ch == '*') {
                s+=5;
            }
            else if(ch == '.') {
                s-=2;
            }
            else {
                break;
            }
            if(j!= n-1) {
                s--;
            }
        }
    }
    if(success) {
        cout<<"Yes"<<endl;
        cout<<s<<endl;
    }
    else {
        cout<<"No"<<endl;
    }
}

int main() {

    int n, m, k, s;
    cin>>n>>m>>k>>s;
    char park[100][100];
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            cin>>park[i][j];
        }
    }

    magicalPark(park, m, n, k, s);

    return 0;
}