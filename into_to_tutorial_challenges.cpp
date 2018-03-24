#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int search;
    cin>>search;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {cin>>a[i];
     if(a[i]==search)
         printf("%d",i);
    }
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

