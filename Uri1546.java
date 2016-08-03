

	import java.util.Scanner;

	//import java.util.*;

	public class Uri1546 {

		public static void main(String[] args) {
			
			Scanner scan = new Scanner(System.in);
			int a,b,c=0 ,temp = 0;
			
			 String For1 = "Rolien";
			 String For2 = "Naej";
			 String For3 = "Elehcim";
			 String For4 = "Odranoel";
			 
			  int invalue;
			 
			
			a = scan.nextInt();
		 
			 for (int i=0;i<a;i++){

				 b = scan.nextInt();
				 
		            for (int j=0;j<b;j++){
		            	
		            	invalue = scan.nextInt();
		            	if (invalue == 1){
		            		System.out.println(For1);
		            	}
		            	else if (invalue == 2){
		            		System.out.println(For2);
		            	}
		            	else if (invalue == 3){
		            		System.out.println(For3);
		            	}
		            	
		            	else if (invalue == 4){
		            		System.out.println(For4);
		            	}	    	            	
		            }
	        	}
		}


}
