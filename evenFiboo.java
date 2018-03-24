import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for(int a0 = 0; a0 < t; a0++){
            long n = in.nextLong();
            long f1=0,f2=1,fnew;
            long sum=0;
            while(f2<n)
            {
                fnew=f1+f2;
                f1=f2;
                f2=fnew;
                //System.out.println("n "+n+" f1 "+f1+" f2 "+f2+" fnew "+fnew);
                if(f2%2==0&&f2<n)
                {
                    sum+=fnew;
                    //System.out.println(" inside the condition "+n+" f1 "+f1+" f2 "+f2+" fnew "+fnew);
                }
             }
            System.out.println(sum);
        }
    }
}

