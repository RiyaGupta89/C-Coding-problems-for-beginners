#include<iostream>
#include<cstring>
#include<climits>
using namespace std;

int main() {

    int n;
    cin>>n;
    int maxlen=0;
    int len=0;
    char a[1000];
    int largest_len = INT_MIN;
    char largest[1000];
    cin.get();

    for(int i=0; i<n; i++) {
        cin.getline(a, 1000);
        
        len = strlen(a);
        if(len>largest_len) {
            largest_len = len;
            strcpy(largest, a);
        }
    }

    cout<<largest<<' and '<<largest_len<<endl;

    return 0;
}