import java.io.*;
import java.util.*;
import java.math.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        long n;
        Scanner s=new Scanner(System.in);
        n=s.nextInt();
        for(long i=0;i<n;i++)
        {
        long no1=s.nextInt();
            long no2=s.nextInt();
            long count=0;
          count = (int)Math.floor(Math.sqrt(no2)) - (int)Math.ceil(Math.sqrt(no1)) + 1;  

            System.out.println(count);
        }
    }
}
