#include<iostream>
using namespace std;
int main(){
int m, n;
cin>>m;
cin>>n;
int a[m][n];
int b[m][n];
int c[m][n];
for (int i=0; i<m; i++)
        for(int j=0; j<n; j++)
{
        cin >> a[i][j];
}
for (int i=0; i<m;  i++)
        for(int j=0; j<n; j++)
{
        cin >> b[i][j];
        c[m][n]=a[m][n]+b[m][n];
}
for (int i=0; i<m; i++)
        for(int j=0; j<n; j++)
{
        cout << c[i][j]<<" ";
}
return 0;
} 
