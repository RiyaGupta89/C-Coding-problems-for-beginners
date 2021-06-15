#include <iostream>
using namespace std;

int binarySearch(int a[], int n, int key)
{
    int l = 0;
    int u = n - 1;
   
        while (l<u)
        {
            int mid = (l + u) / 2;
            if(a[mid] == key) {
                return mid;
            }
            else if(a[mid]>key) {
                u = mid-1;
            }
            else if(a[mid]<key) {
                l = mid+1;
            }
        }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int a[1000];
     for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int key;
    cin>>key;
    cout<<binarySearch(a, n, key)<<endl;
}