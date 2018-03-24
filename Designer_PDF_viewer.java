import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int[] h = new int[26];
        for(int h_i=0; h_i < 26; h_i++){
            h[h_i] = in.nextInt();
        }
        String word = in.next();
        int strl=word.length();
        int c[]=new int[strl];
      //  System.out.println(strl);
        for(int i=0;i<strl;i++)
            {
            c[i]=h[Character.getNumericValue(word.charAt(i))-10];
          //  System.out.println(c[i]);
        }
        int max=c[0];
        for(int i=0;i<strl;i++)
            {
            if(max<c[i])
                max=c[i];
        }
        System.out.println(strl*max);
      //  System.out.println(Character.getNumericValue(word.charAt(0)));
       
    }
}

