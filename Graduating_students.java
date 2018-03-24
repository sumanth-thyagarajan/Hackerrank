import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    static int[] solve(int[] grades){
        int temp1,temp2,temp3;
        //System.out.println("\n no is :"+grades.length);
        for(int i=0;i<grades.length;i++)
            {
            temp1=grades[i];
            temp1=temp1%10;
            //System.out.println("\n the no is "+temp1);
         //   temp1=temp1%5;
           // System.out.println("\n the no is "+temp1);
            if(temp1<5)
                {
                temp1=5-temp1;
                if(temp1<3)
                {grades[i]=grades[i]+temp1;
                 if(grades[i]<40)
                     grades[i]=grades[i]-temp1;
                }
              //  System.out.println("\n the no is 5 "+temp1);
                }
            
            else if(temp1>5)
                {
                temp1=10-temp1;
                if(temp1<3)
                { grades[i]=grades[i]+temp1;
                 if(grades[i]<40)
                     grades[i]=grades[i]-temp1;
                }
               // System.out.println("\n the no is 10"+temp1);
            }
        }
        return grades;
        // Complete this function
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] grades = new int[n];
        for(int grades_i=0; grades_i < n; grades_i++){
            grades[grades_i] = in.nextInt();
        }
        int[] result = solve(grades);
        for (int i = 0; i < result.length; i++) {
            System.out.print(result[i] + (i != result.length - 1 ? "\n" : ""));
        }
        System.out.println("");
        

    }
}

