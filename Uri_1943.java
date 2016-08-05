
import java.io.IOException;
import java.util.Scanner;
public class Uri_1943 {

   public static void main(String[] args) throws IOException {

Scanner scan = new Scanner(System.in);
   
		int lo = scan.nextInt();
		String m = "0";
		
		if (lo==1){
			m = "1";
		}
		else if (lo <= 3){
			m = "3";
		}
		else if (lo <=5){
			m = "5";
		}
		else if (lo <=10){
			m = "10";
		}
		else if (lo <=25){
			m = "25";
		}
		else if (lo <=50){
			m = "50";
		}
		else if (lo <=100){
			m = "100";
		}
		//String n = "TOP "+String.valueOf(m);
		System.out.println("Top "+m);
		//System.out.println(n);
	 
	}

}
