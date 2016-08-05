import java.util.Scanner;

public class uri_1796 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int loop = scan.nextInt();
		int n = 0 , y = 0 ;
		int input;
		
		for (int i =0 ;i <loop; i++){
			input = scan.nextInt();
			
			if (input == 0){
				y++ ;
			}
			else {
				n++ ;
			}
		}
		if (y > n ){
		System.out.println("Y");
		}
		
		else {
			System.out.println("N");	
		}

	}

}
