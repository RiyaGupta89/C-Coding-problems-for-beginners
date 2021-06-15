#include<iostream>
#include<math.h>
using namespace std;

int main() {

    int N;
    cin>>N;
    int binNo;
    int val;
    int sum;
    for(int i=0; i<N; i++) {
        sum =0;
        cin>>binNo;
        val = 0;
        while(binNo>0) {
            int rem = binNo%10;
            sum += rem * pow(2, val);
            val++;
            binNo=binNo/10;
        }
        cout<<sum<<endl;
    }

    return 0;
}