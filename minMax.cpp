#include<iostream>
#include<climits>
using namespace std;

int main() {

    int n;
    cin>>n;
    int min_so_far = INT_MAX;
    int max_so_far = INT_MIN;
    for(int i=0; i<n; i++) {
        int num;
        cin>>num;
        if(num>max_so_far) {
            max_so_far = num;
        } 
        if(num<min_so_far) {
            min_so_far = num;
        }
    }

    cout<<"Maximum number "<<max_so_far<<endl;
    cout<<"Minimum number "<<min_so_far<<endl;

    return 0;
}