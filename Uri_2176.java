package Another;

import java.util.Scanner;

public class Uri_2176 {

	public static void main(String[] args) {
		
		double a,b=0;
		String lin;
		char m ;
	
		Scanner scan = new Scanner (System.in);
		lin = scan.next();

		a = lin.length();
		
		for (int i = 0;i<a;i++){
			m =lin.charAt(i);
			
			if (m == '1')	b++;			
				
		}
		
		if (b%2==0)	   m = '0';
		    else       m = '1';
		
		
		System.out.println(lin+m);

	}

}
