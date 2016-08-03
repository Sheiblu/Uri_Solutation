import java.util.Scanner;

public class Uri1051 {

	public static void main(String[] args) {
		double taka = 0, tax = 0 , anotherTax = 0; 
		Scanner scan = new Scanner (System.in);
		
		taka = scan.nextDouble();
		
		if (taka>4500){
			tax = (79.9992 + 269.9982);
			anotherTax = (taka - 4500) * .28;
			tax += anotherTax;
			System.out.printf("R$ %.2f\n",tax);
		}
		
		else if (taka>3000){
			tax = (79.9992);
			anotherTax = (taka - 3000) * .18;
			tax += anotherTax;
			System.out.printf("R$ %.2f\n",tax);
		}
		else if (taka>2000){	
			anotherTax = (taka - 2000) * .08;
			tax += anotherTax;
			System.out.printf("R$ %.2f\n",tax);
		}
		
		else {
			System.out.printf("Isento\n");
		}
	}

}
