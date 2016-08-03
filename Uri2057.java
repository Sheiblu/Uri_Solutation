import java.util.Scanner;

public class Uri2057 {
	

		public static void main(String[] args) {
			
			Scanner scan = new Scanner(System.in);
			int m , n,o,p;
			m=scan.nextInt();
			n=scan.nextInt();
			o=scan.nextInt();
		    p = m+n+o;
		    
		    if(p==24){
		    	 System.out.println(0);
		    }
		    else if (p<0){
		    	 System.out.println(24+p);
		    }
		    else if(p>24){
		    	 System.out.println(p-24);
		    }
		    
		    else{
		    	 System.out.println(p);
		    }
	}
}
