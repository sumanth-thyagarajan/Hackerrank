#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        cin>>a[i][j];
    int s1=0,s2=0;
    for(int i=0;i<n;i++)
        s1+=a[i][i];
    for(int i=0,j=n-1;i<n,j>=0;j--,i++)
        s2+=a[i][j];
    int s3;
    s3=s1-s2;
    if(s3<0)
        s3=-1*s3;
    cout<<s3;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

