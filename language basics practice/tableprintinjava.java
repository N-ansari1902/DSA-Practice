/* GFG QUESTION :
While loop- printTable - Java
Difficulty: EasyAccuracy: 52.74%Submissions: 66K+Points: 2
While loop is another loop like for loop but unlike for loop it only checks for one condition.
Here, we will use a while loop and print a number n's table in reverse order.

Examples:

Input: n = 1
Output: 10 9 8 7 6 5 4 3 2 1
Input: n = 2
Output: 20 18 16 14 12 10 8 6 4 2
Constraints:
1 <= n<= 1000
  */

//{ Driver Code Starts
//Initial Template for Java
//Initial Template for C++
//Initial Template for C++

/*package whatever //do not write package name here */

import java.io.*;
import java.util.*;

class GFG {
	public static void main (String[] args) {
		
		//taking input using Scanner class
		Scanner sc = new Scanner(System.in);
		
		//taking count of total testcases
		int t=sc.nextInt();
		while(t-->0)
		{
		    //taking n
		    int n =sc.nextInt();
		    
		    //creating an object of class Geeks
		    Geeks obj=new Geeks();
		    
		    //calling printTable() method
		    //of class Geeks and passing
		    //n as an argument
		    obj.printTable(n);
		
System.out.println("~");
}
	
		
	}
}
// } Driver Code Ends


//User function Template for Java
class Geeks {
	 static void printTable (int n) 
	 {
            int multiplier=10;
            while(multiplier>0)
            {
                System.out.print(n*multiplier+" ");
                multiplier = multiplier-1;
            }
       System.out.println();
	 }

}
