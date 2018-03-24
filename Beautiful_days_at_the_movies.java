import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
     Scanner s =new Scanner(System.in);
            int day1=s.nextInt();
            int day2=s.nextInt();
        int n=s.nextInt();
        int count=0;
            for(int j=day1;j<=day2;j++)
            {
                int temp1=j;
                int temp2=0;
                int rem;
                int ab;
                while(temp1!=0)
                {
                    rem=temp1%10;
                    temp1/=10;
                    temp2=temp2*10+rem;
                    
                }
               //System.out.println(""+temp1);
                ab=Math.abs(j-temp2);
                if(ab%n==0)count++;
                //System.out.println("absolute"+ab);
            }
        System.out.println(count);
        }
    
}
