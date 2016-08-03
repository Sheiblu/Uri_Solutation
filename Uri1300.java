import java.util.Scanner;

public class Uri1300 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int a ;
		
		while (scan.hasNextInt()){
			a = scan.nextInt();
			if(a%6 == 0){
				System.out.println("Y");
			}
			else 
				System.out.println("N");
			
		}	
	}

}
