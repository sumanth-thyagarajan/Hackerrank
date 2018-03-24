#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> height(n);
    for(int height_i = 0;height_i < n;height_i++){
       cin >> height[height_i];
    }
    int count=0;
    int max=0;
    for(int i=0;i<n;i++)
        {
        if(max<height[i])
            max=height[i];
    }
    for(int i=0;i<n;i++)
    {
        if(max==height[i])
            count++;
    }
    cout<<count;
     return 0;
}

