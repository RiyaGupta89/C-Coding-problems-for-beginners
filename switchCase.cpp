#include<iostream>
using namespace std;

int main() {

    char ch;
    cin>>ch;

    switch(ch) {
        case 'b':
        case 'B':
            cout<<"Burger";
            break;
        case 'm':
        case 'M':
            cout<<"Maggi";
            break;
        case 'p':
        case 'P':
            cout<<"Pizza";
            break;
        case 'c':
        case 'C':
            cout<<"Coke";
            break;
        case 'd': 
        case 'D':
            cout<<"Dosa";
            break;
        
        default:
            cout<<"Item not available"<<endl;
    }

    return 0;
}