#include<iostream>
using namespace std;

int main() {
    int N; //bucket in the memory
    cout<<"Enter the value of N "<<endl;
    cin>>N;  //taking input from the user 
    int i=1;  //init condition
    int sum=0;
    while(i<=N) {  //stopping criteria
        sum += i;
        i++;   //updation
    }
    cout<<sum<<endl;  //output the sum
    return 0;
}