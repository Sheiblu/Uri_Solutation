import java.util.Scanner;

public class Uri1_1332 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int loop ;
		String name;
		int a;
		
		loop = scan.nextInt();
		
		for (int i =0 ;i<loop;i++){
			name = scan.next();
			a = name.length();
			
			if (a == 5){
				System.out.println("3");
			}
			else{
				if ((name.charAt(0)=='o' && name.charAt(1)=='n') || (name.charAt(0)=='o' && name.charAt(2)=='e') || (name.charAt(1)=='n' && name.charAt(2)=='e')) {
				     System.out.println("1");
				}
				else {
					 System.out.println("2");
				}
				
			}
			
		}

	}

}
