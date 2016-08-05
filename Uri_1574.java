import java.util.Scanner;

public class Uri_1574 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
	    
		int loop2, ans = 0, m;
		int loop1 = scan.nextInt();
		String order = " ";
		int ar [] = new int [100];
		
		for (int i =0 ;i<loop1;i++){
			
	     loop2 = scan.nextInt();	
	     
	     for (int j =0 ;j<loop2;j++){
	    	 
	    	 order = scan.next();
	    	 
	     	 if (order.equalsIgnoreCase("LEFT")){
	     		
	    		 ans-- ;
	    		 ar[j]= -1;
	    		 
	    	 }
	    	 else if (order.equalsIgnoreCase("RIGHT")){
	    		 ans++ ;
	    		 ar[j] = 1;
	    		
	    	 }
	    	 
	    	 else {
	    		 
	   
	    		 order = scan.next();
	    		 m = scan.nextInt();
	    		 
	    		 ans += ar[m-1];
	    		 ar [j] = ar [m-1];
	    		 
	    	 }
	    	 
	     }
	     
	     System.out.println(ans);
	     ans = 0;
			
		}


	}

}
