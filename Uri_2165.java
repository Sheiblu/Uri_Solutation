import java.util.Scanner;

public class Uri_2165 {

	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
        String  a ;
        int sum = 0;
        int len;
        a = scan.nextLine();
        len = a.length();
        
        if ( len <= 140){
        	System.out.println("TWEET");
        }
        else {
        	System.out.println("MUTE");
        }
		    
	}

}
