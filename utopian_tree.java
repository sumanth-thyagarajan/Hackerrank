import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner s=new Scanner(System.in);
        int n;
        n=s.nextInt();
        
        for(int i=0;i<n;i++)
        {
            int height=1;
            int cycle=s.nextInt();
            if(cycle==0)System.out.println(height);
            else
            {for(int j=1;j<=cycle;j++)
            {
                if(j%2==0)
                {
                    height+=1;
                }
                else
                    height*=2;
             }
             System.out.println(height);
            }
           
        }
    }
}
