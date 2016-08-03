import java.util.Scanner;

public class Uri1170 {
	
	public static void main (String [] args){
		Scanner scan = new Scanner (System.in);
		int total = 0, n;
		double input;
		
		n= scan.nextInt();
		for (int i = 0 ; i<n; i++){
			
			input = scan.nextDouble();
			  while (input > 1){
				  input = input/2 ;
				  total++;
			  }
			 System.out.printf("%d dias\n",total);
			 total = 0;
		}
	}

}
