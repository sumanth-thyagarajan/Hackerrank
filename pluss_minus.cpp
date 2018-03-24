#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
   long double t0,tp,tn;
   int temp0=0,temp=0 ,temn=0;
    for(int i=0;i<n;i++)
        {
        if(a[i]==0)
            temp0++;
        else if(a[i]>0)
            temp++;
        else
            temn++;
            
    }
    t0=(long double)temp0/n;
    tp=(long double)temp/n;
    tn=(long double)temn/n;
    cout<<tp<<"\n"<<tn<<"\n"<<t0;
        /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

