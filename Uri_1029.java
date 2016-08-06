import java.util.Arrays;
import java.util.Scanner;

public class Uri_1029 {
	
		static long  dp[]= new long[100];
		static int a = 0;

		public static long  fib(long n) {
			
			if(n==1){
				return 1;
			}
			if(n==0) {
					return 0;
			}
//			if(dp[(int) n]!=-1){
//				a += 2;
//							return dp[(int) n];
		//	}
		//	else 
		//	{
				a += 2;
				dp[(int) n]=fib(n-1)+fib(n-2);
				return dp[(int) n];
		//	}	
		}

		public static void main(String args[])
		{
			
			Scanner scan =new Scanner(System.in);
			//Arrays.fill(dp, -1);
			long n;
			long m=0;
			int loop = scan.nextInt();
			
			for (int i =0 ;i<loop;i++){
			 Arrays.fill(dp, -1);
			n= scan.nextLong();
			m= fib(n);
			//System.out.println(m+".0");
			System.out.println("fib("+n+") = "+a+" calls = "+m);
			a = 0;			
			}						
		  }
		}
