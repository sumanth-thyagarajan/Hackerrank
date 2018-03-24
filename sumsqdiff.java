import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
       long  t = in.nextInt();
        for(int a0 = 0; a0 < t; a0++){
            long n = in.nextInt();
            long sum1=0,sum2=0;
            for(int i=1;i<=n;i++)
            {
                sum1+=i;
                sum2+=i*i;
            }
            sum1=sum1*sum1;
            System.out.println(sum1-sum2);
        }
        
    }
}

