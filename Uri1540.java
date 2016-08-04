import java.util.Scanner;

public class Uri1540 {

	public static void main(String[] args) {
Scanner scan = new Scanner (System.in);
		
		int loop = scan.nextInt();
		int ab = 0;
		double a,b,c,d,result;
		String abc ="0.25" ;
		
		for (int i = 0 ;i<loop; i++){
			
			 a =  scan.nextDouble();
			 b =  scan.nextDouble();
			 c =  scan.nextDouble();
			 d =  scan.nextDouble();
			 
			 result = (d-b) / (c-a);
			 
			 ab = (int) result ;
			 
			 if ((result - ab) > .00){
			 abc =  String.valueOf(result - ab) ;
			 
			 }
			 else {
				 abc = "0.00";
			 }
			
			System.out.printf("%d,%c%c\n",ab,abc.charAt(2),abc.charAt(3));
			
		}

	}

}
