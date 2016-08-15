package edu.tring.java;

import java.util.Scanner;

public class Uri_1871 {

	
		public static void main(String[] args) {
			Scanner scan = new Scanner (System.in);
			int a,b,c,d;
			String am ;
			
			while(scan.hasNext()){
							
				a = scan.nextInt();
				b = scan.nextInt();
				
				if (a == 0 & b == 0)
					break;
				
				
				a =a+b;
				am = String.valueOf(a);
				String[] ar = am.split("0");
				
				for (int i=0;i<ar.length;i++){
					System.out.print(ar[i]);
				}	
				System.out.println();
			}

	}

}
