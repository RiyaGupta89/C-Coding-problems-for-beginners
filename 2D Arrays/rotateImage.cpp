#include<iostream>
using namespace std;

void rotateArray(int a[][50], int m, int n) {
    for(int i=0; i<m; i++) {
      int startCol = 0;
      int endCol = m-1;
      while(startCol<endCol) {
          swap(a[i][startCol], a[i][endCol]);
          startCol++;
          endCol--;
      }
    }
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            if(i<j) {
                swap(a[i][j], a[j][i]);
            }
        }
    }
}

int main() {
    int m, n;
   int a[50][50];
    int val = 1;
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            a[i][j]=val;
            val=val+1;
        }
    }
    rotateArray(a, m, n);

    return 0;
}