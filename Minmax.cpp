#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> arr(5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       cin >> arr[arr_i];
    }
    long long int min=0,max=0;
    long long int temp;
    for(int i=0;i<5;i++)
        {
        for(int j=0;j<5;j++)
        {
            if(arr[i]>arr[j] )
             {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            } 
        }
    }
    for(int i=0;i<4;i++)
        min+=arr[i];
    for(int j=5;j>0;j--)
        max+=arr[j];
    cout<<max<<" "<<min;
    return 0;
}

