#include<iostream>
using namespace std;

int main() {


    char ch;
    cout<<"Enter the operator"<<endl;
    cin>>ch;
    int n1, n2;
    cout<<"Enter the numbers on which you want to perform operations"<<endl;
    cin>>n1>>n2;
    switch(ch) {
        case '+':
            cout<<n1+n2<<endl;
            break;
        case '-':
            cout<<n1-n2<<endl;
            break;
        case '*':
            cout<<n1*n2<<endl;
            break;
        case '%':
            cout<<n1%n2<<endl;
            break;
        case '/':
            cout<<n1/n2<<endl;
            break;
        case 'X':
        case 'x':
            break;
        default:
            cout<<"Invalid operation. Try again."<<endl;
    }


    return 0;
}