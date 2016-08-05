import java.util.Scanner;

public class Uri_1794 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int a,b,c,d,e;
		a = scan.nextInt();
		b =scan.nextInt();
		c = scan.nextInt();
		d = scan.nextInt();
		e = scan.nextInt();
		
		if ( a>= b && a<=c && a>= d && a<= e){
			System.out.println("possivel");
		}
		else {
			System.out.println("impossivel");
		}
		

	}

}
