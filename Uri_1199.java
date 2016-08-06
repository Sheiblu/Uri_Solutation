package File.Experiment;

import java.util.Scanner;

public class Uri_1199 {
	public static void main(String[] args) {
		 
        Scanner scan = new Scanner(System.in);
       
     while (scan.hasNext()){
    	 
        String num = scan.nextLine();
        
         if (num.charAt(0)=='-'){
        	break;
        }
        
        else if (num.charAt(0)=='0' && num.charAt(1)== 'x'){
        	int decode2 = Integer.decode(num);
    		System.out.println(decode2);
        }
        else {
        	int n = Integer.parseInt(num);
        	String s = String.format("0x%X", n);		
    		System.out.println(s);
        	
        }
		
 
      }
	}
}
