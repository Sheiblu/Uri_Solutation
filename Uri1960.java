import java.util.Scanner;

public class Uri1960 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int a = scan.nextInt();
		
		while (a>0){
			if (a>=900){
	            a -= 900;
	            System.out.print("CM");
	        }
	        else if (a>=500){
	            a -= 500;
	            System.out.print("D");
	        }
	        else if (a>=400){
	            a -= 400;
	            System.out.print("CD");
	        }
	        else if (a>=100){
	            a -= 100;
	            System.out.print("C");
	        }
	        else if (a >= 90){
	            a -= 90;
	            System.out.print("XC");
	        }
	        else if (a >= 50){
	            a -= 50;
	            System.out.print("L");
	        }
	        else if (a >= 40){
	            a -= 40;
	            System.out.print("XL");
	        }
	        else if (a >= 10){
	            a -= 10;
	            System.out.print("X");
	        }

	        else if (a == 9){
	            a -= 9;
	            System.out.print("IX");
	        }

	        else if (a >= 5){
	            a -= 5;
	            System.out.print("V");
	        }
	        else if (a == 4){
	            a -= 4;
	            System.out.print("IV");
	        }

	        else if (a >= 1){
	            a -= 1;
	            System.out.print("I");
	        }
			
		}
		System.out.println();

	}

}
