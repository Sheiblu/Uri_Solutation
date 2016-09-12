package Another;

import java.util.Scanner;

public class Uri_2166 {

	public static void main(String[] args) {
		
		double a,b=0;
		
		Scanner scan = new Scanner (System.in);
		a= scan.nextDouble();
		
		for (int i = 0;i<a;i++){
				
			b += 2;
			b = 1/b;
		
		}
		
		b += 1;
		System.out.printf("%.10f\n",b);

	}

}
