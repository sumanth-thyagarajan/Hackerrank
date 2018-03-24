import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    static int[] getRecord(int[] s){
        int max,maxcount=0;
        int min,mincount=0;
        int s1[]=new int[2];
        max=min=s[0];
        for(int i=0;i<s.length;i++)
            {
            if(max<s[i])
                {
                max=s[i];
                maxcount++;
            }
            if(min>s[i])
                {
                min=s[i];
                mincount++;
            }
            
        }
        //if(maxcount==0)
            //s1[0]=1;
        //else 
        s1[0]=maxcount;
        //if(mincount==0)
            //s1[1]=1;
        //else 
        s1[1]=mincount;
        return s1;
        // Complete this function
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] s = new int[n];
        for(int s_i=0; s_i < n; s_i++){
            s[s_i] = in.nextInt();
        }
        int[] result = getRecord(s);
        String separator = "", delimiter = " ";
        for (Integer val : result) {
            System.out.print(separator + val);
            separator = delimiter;
        }
        System.out.println("");
    }
}

