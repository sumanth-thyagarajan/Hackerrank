#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void sorter1(int a[],int size)
{
        int temp;
    for(int v=0;v<size;v++)
    {
        for(int z=0;z<size;z++)
        {
            if(a[v]<a[z])
            {
                temp=a[z];
                a[z]=a[v];
                a[v]=temp;
            }
        }
    }
      
   
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int test;
    scanf("%d",&test);
    for(int i=0;i<test;i++)
    {
        int size,k;
        scanf("%d%d",&size,&k);
      //  printf("%d%d\n",size,k);
        int a[size],b[size];
        for(int q=0;q<size;q++)
        {
            scanf("%d",&a[q]);
        }
        for(int q=0;q<size;q++)
        {
            scanf("%d",&b[q]);
        }
       // for(int te=0;te<size;te++)
     //  {printf("%d %d %d\n",te+1,a[te],b[te]);}
       //int temp;
    sorter1(a,size);
        sorter1(b,size);
        //  for(int te=0;te<size;te++)
      //{printf("%d:  %d %d\n",te+1,a[te],b[te]);}
        int flag=0;
    for(int i=0,j=size-1;i<size;i++,j--)
    {
        if(a[i]+b[j]<k)
        {
            flag=1;
            break;
        }
        else if(a[i]+b[j]>=k)flag=2;
    }
    if(flag==2)
        printf("YES\n");
    else if(flag==1)printf("NO\n");
    }
    
    return 0;
}

