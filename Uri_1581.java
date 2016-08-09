package File.Experiment;

import java.util.Scanner;

public class Uri_1581 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int loop = scan.nextInt();
		int lop2;
		String input1 , input2, input3 ;
		int a = 0;
		for (int i = 0; i<loop;i++){
			
			lop2 = scan.nextInt();
			input1 = scan.next();
			for (int j = 0; j<lop2-1;j++){
				input2 = scan.next();
				
				if (input2.equalsIgnoreCase(input1)){
					a = a+1; ;
				}
				else {
					a = -120;
				}
				
			}
			
			if (a >= 0){
				System.out.println(input1);
			}
			else {
				System.out.println("ingles");
			}
			
			a = 0;
		
			
		}
	}

}
