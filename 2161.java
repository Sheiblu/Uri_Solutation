import java.util.Scanner;


public class Main {

	public static void main(String[] args) {
		double a,b=0;
		Scanner scan = new Scanner(System.in);
		a = scan.nextDouble();
		while (a>0){
			b += 6;
			b = 1/b;
			a--;
		}
		b +=3;
		System.out.printf("%.10f\n",b);
	}

}
