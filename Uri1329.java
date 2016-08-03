package edu.tring.java;

import java.util.Scanner;

public class Uri1329 {

	public static void main(String[] args) {
		Scanner scan =  new Scanner (System.in);
		int a = scan.nextInt();
		
		int n = 1;
		int mary = 0 , ani =0,m ;
		
		while ( n != 0 ) {
			
			if (a==0){
				break;
			}
		
		
		for (int i = 0 ; i<a; i++){
			m = scan.nextInt();
			if (m == 0){
				mary++;
			}
			
			else {
				ani++;
			}
			
		}
		
		System.out.println("Mary won "+mary+" times and John won "+ani+" times");
		
		mary = 0 ;
		ani =0 ;
		a = scan.nextInt();
		
		}
		

	}

}
