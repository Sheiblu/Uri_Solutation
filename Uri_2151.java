package File.Experiment;

import java.util.Scanner;

public class Uri_2151 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int loop = scan.nextInt();
		int input1 , input2, input3 ;
		String a = " - A porta abriu!";
		String b = " - A porta fechou!";
		
		for (int i = 0 ;i<loop;i++){
			input1 = scan.nextInt();
			input2 = scan.nextInt();
			input3 = scan.nextInt();
			if (input1<10){
				System.out.print("0"+input1+":");
				}
			else {
				System.out.print(input1+":");
			}
			if (input2<10){
				System.out.print("0"+input2);
				}
			else {
				System.out.print(input2);
			}
			
			if (input3==1){
				System.out.print(a);
				}
			else {
				System.out.print(b);
			}
			
			System.out.println();
			
			
		}

	}

}
