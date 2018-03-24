import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    static int migratoryBirds(int n, int[] ar) {
        int count[]=new int[5];
        for(int i=0;i<5;i++)
            {int counter=0;
            for(int j=0;j<ar.length;j++)
                {
                if(ar[j]==i+1)
                    counter++;
            }
             count[i]=counter;
            
        }
        int max=count[0];
        int in=0;
       // for(int i=0;i<5;i++)
         //   System.out.println(count[i]);
        for(int i=1;i<5;i++)
            {
            if(max<count[i])
                max=count[i];
            
        }
        for(int i=0;i<5;i++)
            {if(max==count[i])
                {
                return i+1;
            }
            }
        System.out.println(max);
        return in;
        
        // Complete this function
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] ar = new int[n];
        for(int ar_i = 0; ar_i < n; ar_i++){
            ar[ar_i] = in.nextInt();
        }
        int result = migratoryBirds(n, ar);
        System.out.println(result);
    }
}

