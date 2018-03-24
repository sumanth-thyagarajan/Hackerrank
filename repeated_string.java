import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.next();
        long n = in.nextLong();
        long count=0;
        for(int i=0;i<s.length();i++)
        {
            if(s.charAt(i)=='a')count++;
        }
        //System.out.println(count);
        long temp=0;
        temp=n/s.length();
        temp=temp*count;
        //System.out.println(temp*count);
        long temp1=n%s.length();
        for(int i=0;i<temp1;i++)
        {
            if(s.charAt(i)=='a')temp++;
        }
        System.out.println(temp);
    }
}

