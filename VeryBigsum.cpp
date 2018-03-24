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
    long long int s=0;
    for(int i=0;i<n;i++)
        {
        cin>>a[i];
        s=s+a[i];
    }
    cout<<s;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

