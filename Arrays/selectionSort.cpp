#include<iostream>
using namespace std;

void selectionSort(int a[], int n) {
    for(int i=0; i<n-1; i++) {
        int min_index = i;
        for(int j=i; i<n; j++) {
            if(a[j]<a[min_index]) {
                min_index = j;
            }
        }
        int temp = a[i];
        a[i] = a[min_index];
        a[min_index] =  temp;
    }
    for(int i=0; i<n; i++) {
        cout<<a[i]<<" ";
    }
}

int main() {
    int n;
    cin>>n;
    int a[1000];
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }
    selectionSort(a, n);
    return 0;
}