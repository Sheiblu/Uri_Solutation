import java.util.Arrays;
import java.util.Scanner;

public class Uri_1176 {
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

	public static void main(String[] args) {
		Scanner scan =new Scanner(System.in);
	     Arrays.fill(ar, -1);
	     long n;
	     int loop = 0;
	     loop = scan.nextInt();
	     
	     for (int i=0; i<loop;i++){
	     n = scan.nextLong();
	     
	     System.out.println("Fib("+n+") = "+fibo(n));
	  
	     }
	}
}
