import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    static int bonAppetit(int n, int k, int b, int[] ar) {
        int sum=0;
        for(int i=0;i<n;i++)
            {
            if(i==k)continue;
            sum+=ar[i];
        }
      //  System.out.println("ennoda kaasu"+(sum/2));
        return (sum/2);
        // Complete this function
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int k = in.nextInt();
        int[] ar = new int[n];
        for(int ar_i = 0; ar_i < n; ar_i++){
            ar[ar_i] = in.nextInt();
        }
        int b = in.nextInt();
        int result = bonAppetit(n, k, b, ar);
        if(result!=b)
        {result=b-result;
         System.out.println(result);}
        else if(result==b)
            System.out.println("Bon Appetit");
    }
}

