import java.math.BigInteger;
import java.util.Scanner;


public class Main {

	public static void main(String[] args) {
			
		
		int a,loop;
		BigInteger b,n=new BigInteger("0"),m,c=new BigInteger("2");

		Scanner scan = new Scanner(System.in);
		loop = scan.nextInt();
		for (int i=0;i<loop;i++){
			b = scan.nextBigInteger();
			m = b.mod(c);

			if (m.equals(n)){
				System.out.println("1");
			}
			else {
				System.out.println("9");
			}
			
		}

	}

}
