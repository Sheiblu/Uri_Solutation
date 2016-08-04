package edu.tring.java;

import java.util.Scanner;

public class Uri_1585 {

	public static void main(String[] args) {
		Scanner scan = new Scanner (System.in);
		
		int num1 , num2, ans;
		
		int loop = scan.nextInt();
		
		for (int i =0 ;i <loop; i++){
			num1 = scan.nextInt();
			num2 = scan.nextInt();
			ans = (num1*num2)/2;
			System.out.println(ans+" cm2");
		}

	}

}
