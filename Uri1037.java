import java.util.Scanner;

public class Uri1037 {

	public static void main(String[] args) {
		double l ;
		Scanner scan = new Scanner(System.in);
		l = scan.nextDouble();
		
		if(l<0 || l>100){
			System.out.println("Fora de intervalo");
		}
		else if(l>=0 && l<=25){
			System.out.println("Intervalo [0,25]");
    	}
		
		else if(l>25 && l<=50){
			System.out.println("Intervalo (25,50]");
	}
		else if(l>50 && l<=75){
			System.out.println("Intervalo (50,75]");
	}
		else {
			System.out.println("Intervalo (75,100]");
	}
	}
}
	
