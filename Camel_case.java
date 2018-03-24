import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.next();
       // System.out.println(s);
        int count=1;
     //   System.out.println(s.length());
        for(int i=0;i<s.length();i++)
        {
            if(Character.isUpperCase(s.charAt(i)))
                count++;
        }
        System.out.println(count);
    }
}

