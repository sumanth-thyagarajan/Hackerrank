import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        int n;
        Scanner s=new Scanner(System.in);
        n=s.nextInt();
       // System.out.println(n);
        for(int i=0;i<n;i++)
        {
            int a=s.nextInt();
           // a=s.nextInt();
            // System.out.println(a);
            int temp;
            int count=0;
            int b=a;
            while(a!=0)
            {
               // if(temp!=0)
                temp=a%10;
               // System.out.println("temp"+temp);
              //  System.out.println(temp);
               // if(temp==0){a=a/10; temp=a%10;}
                if(temp!=0)
                if(b%temp==0)count++;
                a=a/10;
               // System.out.println("value"+a);
                
            }
           System.out.println(count);
        }
    }
}
