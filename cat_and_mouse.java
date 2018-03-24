import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int q = in.nextInt();
        for(int a0 = 0; a0 < q; a0++){
            int cata,catb;
            int x = in.nextInt();
            int y = in.nextInt();
            int z = in.nextInt();
            cata=Math.abs(x-z);
            catb=Math.abs(y-z);
           // System.out.println(cata+" "+" "+catb);
            if(cata<catb)System.out.println("Cat A");
            else if(catb<cata)System.out.println("Cat B");
            else System.out.println("Mouse C");
        }
    }
}

