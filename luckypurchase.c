#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int digite(int value)
{
    int rem;
    int count=0;
   // printf("%d  ",value);
    while(value>0)
    {
        
        rem=value%10;
        value/=10;
        if(rem==4)
            count++;
        else if(rem==7)
            count--;
        else return -1;
    }
    if(count==0)
        return 0;
    return -1;
}

int main() {
    int n; 
    scanf("%i", &n);
    int min=99999999,temp=-1;
    char* name1 = (char *)malloc(512000 * sizeof(char));
    for(int a0 = 0; a0 < n; a0++){
        char* name = (char *)malloc(512000 * sizeof(char));
        int value; 
        scanf("%s %i", name, &value);
        int temp1;
        temp1=digite(value);
        if(temp1==0)
        {if(value<min)
        {min=value; strcpy(name1,name); temp=temp1;
        }
       //  printf("%d   da",min);
        }
    }
    if(temp==-1)
        printf("-1");
    else printf("%s",name1);
    //printf("")
    return 0;
}

