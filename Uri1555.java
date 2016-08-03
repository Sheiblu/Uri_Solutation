import java.util.Scanner;

public class Uri1555 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int a,b,c,n,x,y;
		
		n = scan.nextInt();
		for(int i =0;i<n;i++){
			 x = scan.nextInt();
			 y = scan.nextInt();
			 
			 a = (3*x)*(3*x) +(y*y) ;
			 b = 2*(x*x) + (5 * y * 5 *y );
			 c = -(100*x) + (y*y*y);
			 
			 if (a >= b && a>=c){
				 System.out.println("Rafael ganhou");
			 }
			 else if (b >= c && b>=a){
				 System.out.println("Beto ganhou");
			 }
		     
			 else {
				 System.out.println("Carlos ganhou");				 
			 }		 
		}
	}

}
