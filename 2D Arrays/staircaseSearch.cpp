#include <iostream>
using namespace std;

int main()
{

    int m, n;
    cin >> m >> n;
    int key;
    cin >> key;
    int a[50][50];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    int i = 0;
    int j = n - 1;
    while (i < m && j < n)
    {
        if (a[i][j] == key)
        {
            cout <<i<< " and "<<j<< endl;
            break;
        }
        if (a[i][j] > key)
        {
            j--;
            cout<<"Lets go to the left"<<endl;
        }
        if (a[i][j] < key)
        {
            i++;
            cout<<"Lets go to the bottom"<<endl;
        }
    }


    return 0;
}