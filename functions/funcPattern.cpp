/*

                                        A B C D E
                                        A B C D
                                        A B C
                                        A B
                                        A

*/

#include<iostream>
using namespace std;

void printPattern(int ch, int n) {

    for (int i=0; i<n; i++) {
         ch = 'A';
        for(int j=0; j<n-i ;j++) {
            cout<<char(ch)<<' ';
            ch = ch + 1; 
        }
        cout<<endl;
    }

}

int main() {

    char ch;
    int n;
    cin>>n;

    printPattern(ch, n);

    return 0;
}