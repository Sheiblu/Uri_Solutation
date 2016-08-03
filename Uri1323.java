import java.util.Scanner;

public class Uri1323 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int a = scan.nextInt();
		int total = 0;
		
		while (a != 0){
			
			for(int i=1;i<=a;i++){
			    total = total + i * i ;
			   }
			
			System.out.println(total);
			     total = 0;
			     a = scan.nextInt();
		     
		}
	}
}
