import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
       Scanner s=new Scanner(System.in);
        int a,b;
        a=s.nextInt();
        b=s.nextInt();
        int max=0;
        int temp;
        for(int i=a;i<=b;i++)
        {
            for(int j=a;j<=b;j++)
            {
                temp=i^j;
                if(max<temp)max=temp;
            }
        }
        System.out.println(max);
    }
}
