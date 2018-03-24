import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    static int sockMerchant(int n, int[] ar) {
        // Complete this function
        int  tmp=-100;
        int count=0;
        for(int i=0;i<n-1;i++)
            {
             if(ar[i]==tmp)
            continue;
           
             if(ar[i]!=tmp)
             {
                    for(int j=i+1;j<n;j++)
                    {
                           if(ar[j]==tmp)
                              continue;
          
                        if(ar[j]!=tmp)
                        {
                            if(ar[i]==ar[j])
                            { // System.out.println(ar[i]+" "+i+" "+ar[j]+" "+j);
                             ar[i]=tmp;
                             ar[j]=tmp;
                              //System.out.println(ar[i]+" "+i+" "+ar[j]+" "+j);
                             count++;
                              break;
                            }
                        }
                        
                        continue;
                    }
                }
            }
        return count;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] ar = new int[n];
        for(int ar_i = 0; ar_i < n; ar_i++){
            ar[ar_i] = in.nextInt();
        }
        int result = sockMerchant(n, ar);
        System.out.println(result);
    }
}

