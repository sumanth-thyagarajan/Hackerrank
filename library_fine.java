import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner s=new Scanner(System.in);
        int ad,am,ay;
        int ed,em,ey;
        ad=s.nextInt();
         am=s.nextInt();
         ay=s.nextInt();
         ed=s.nextInt();
         em=s.nextInt();
         ey=s.nextInt();
        int sum=0;
        if(ay>ey)
            sum=10000;
        else if(ay==ey)
        {
            if(am>em)
            {
                sum+=(am-em)*500;
               // if(ad>ed)
                {
                 //   sum+=(ad-ed)*15;
                 }
            }
            else if(am==em)
            {
                if(ad>ed)
                {
                    sum+=(ad-ed)*15;
                 }
                else sum=0;
            }
        }
        System.out.println(sum);
    }
}
