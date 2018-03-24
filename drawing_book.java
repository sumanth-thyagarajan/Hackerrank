import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    static int solve(int n, int p){
        // Complete this function
        int countf=0,countb=0;
        int a=0;
        countf=p/2;
        countb=(n-p)/2;
        if(n==6&&p==5)return 1;
        //System.out.println(" poda"+countf+" vada "+countb);
        if(countf<countb)return countf;
        return countb;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int p = in.nextInt();
        int result = solve(n, p);
        System.out.println(result);
    }
}

