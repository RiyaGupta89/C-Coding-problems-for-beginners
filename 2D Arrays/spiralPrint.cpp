#include <iostream>
using namespace std;

void spiralprint(int a[1000][1000], int m, int n)
{
    int startRow = 0;
    int endRow = m - 1;
    int startCol = 0;
    int endCol = n - 1;

    while (startRow <= endRow && startCol <= endCol)
    {

        for (int i = startCol; i <= endCol; i++)
        {
            cout << a[startRow][i] << " ";
        }
        startRow++;

        for(int i=startRow; i<=endRow; i++) {
            cout<<a[i][endCol]<<" ";
        }
        endCol--;
    
        for(int i=endCol; i>=startCol; i--) {
            cout<<a[endRow][i]<<" ";
        }
        endRow--;

        for(int i=endRow; i>=0; i--) {
            cout<<a[i][startCol]<<" ";
        }
        startCol++;

    }
}

int main()
{

    int m;
    int n;
    cin >> m;
    cin >> n;
    int a[1000][1000];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    spiralprint(a, m, n);

    return 0;
}