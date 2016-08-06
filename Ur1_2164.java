import java.util.Arrays;
import java.util.Scanner;

public class Ur1_2164 {

	static long ar[] = new long[100];
	public static int c = 0;
	
	
		public static long fibo(long n){
			
			if (n==0){
				return 0;
			}
			if (n==1){
				return 1;
			}
			
			if (ar[(int)n]!=-1){
				return ar[(int)n];
			}
			
			else {
				c += 2;
				ar[(int)n] = fibo(n-1)+fibo(n-2);
				return ar[(int) n];
			}
		}
public static void main (String[] args){
	     Scanner scan =new Scanner(System.in);
	     Arrays.fill(ar, -1);
	     long n;	    	         
	     n = scan.nextLong();
	     System.out.println(fibo(n)+".0");
	       
	}

}
