package edu.tring.java;

import java.util.Scanner;

public class Uri2160 {

	public static void main(String[] args) {
		Scanner scan = new Scanner (System.in);
        String name = scan.nextLine();
        int a = name.length();
         //System.out.println(name.length());
        if (a<=80){
            System.out.println("YES");           
        }
        else {
             System.out.println("NO");
        }

	}

}
