import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner s=new Scanner(System.in);
        int n;
        n=s.nextInt();
        //System.out.println(n);
        String s1=s.next();
        //System.out.println(s1);
        char hike[]=s1.toCharArray();
        int hikear[]=new int[n];
        int count=0;
        for(int i=0;i<n;i++)
            {
                if(hike[i]=='U')++count;
                else if(hike[i]=='D')--count;
                hikear[i]=count;
           // System.out.println(hike[i]+" "+hikear[i]);
            }
        count=0;
        for(int i=0;i<n;i++)
        {
            if(hikear[i]==-1&&hikear[i+1]==0)
                count++;
        }
        System.out.println(count);
       /* int count=0;
       int count1=0;
        for(int i=0;i<n;i++)
        {System.out.println("hi "+count);
           // hike[i]=s.next().chatAt(0);
         //if(count0)
         { System.out.println(hike[i]);
            if(hike[i]=='U')count++;
            else if(hike[i]=='D')count--;
            if(count=-1){count1++;}
         }      
        }
        System.out.println(count1/2);*/
    }
}
