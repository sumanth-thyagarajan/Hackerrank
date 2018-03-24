#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <map>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n, m, scoreboard[200000], alice, ranking[200000];
    scanf("%d", &n);
    for (int i=0; i<n; i++)
        scanf("%d", &scoreboard[i]);
    scanf("%d", &m);
    
    ranking[0] = 1;
    for (int i=1; i<n; i++)
        ranking[i] = (scoreboard[i] == scoreboard[i-1] ? ranking[i-1] : ranking[i-1]+1);

    for (int i=0; i<m; i++)
    {
        scanf("%d", &alice);
        int begin = 0, end = n-1;
        while (begin <= end)
        {
            int mid = (begin + end) / 2;
            if (scoreboard[mid] > alice && (mid == n-1 || scoreboard[mid+1] <= alice))
            {
                // Found score[i] > alice && score[i+1] <= alice (or score[i] is the last score)
                printf("%d\n", ranking[mid]+1);
                break;
            }
            else if (scoreboard[mid] > alice)
                begin = mid+1;
            else
            {
                // score[i] <= alice. Is i the first element in scoreboard? If so, alice is the top of scoreboard! Yay!
                if (mid == 0)
                {
                    printf("1\n");
                    break;
                }
                // Not the top of scoreboard. Continue binary search.
                end = mid-1;
            }
        }
    }
}
