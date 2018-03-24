import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int k = in.nextInt();
        int q = in.nextInt();
        int[] a = new int[n];
        for(int a_i=0; a_i < n; a_i++){
            a[a_i] = in.nextInt();
        }
        int b[]=new int[n];
        int temp;
        for(int i=0,j=0;i<n;i++,j++)
        {
            temp=(i+k)%n;
           // System.out.println(" "+i+" "+j+" "+a[j]+b[temp]);
            b[temp]=a[j];
        }
        for(int a0 = 0; a0 < q; a0++){
            int m = in.nextInt();
            System.out.println(b[m]);
        }
    }
}

