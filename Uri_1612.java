import java.util.Scanner;

public class Uri_1612 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int loop = scan.nextInt();
		int n = 0 , y = 0 ;
		int input;
		
		for (int i =0 ;i <loop; i++){
			input = scan.nextInt();
			if (input %2 == 0){
				System.out.println(input/2);
			}
			else{
				n = (input + 1) /2 ;
				System.out.println(n);
			}
		}
	}

}
