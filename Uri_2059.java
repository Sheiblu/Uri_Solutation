import java.util.Scanner;

public class Uri_2059 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int p,q1,q2,che,acc;
		p =scan.nextInt();
		q1 =scan.nextInt();
		q2 =scan.nextInt();
		che =scan.nextInt();
		acc =scan.nextInt();
		
		if (che== 1 && acc == 0){
		    System.out.println("Jogador 1 ganha!");
		   }
		   else if (che == 1 && acc == 1){
			   System.out.println("Jogador 2 ganha!");
		   }
		   else {

		    if ((q1+q2)%2==0 && p==1){
		    	System.out.println("Jogador 1 ganha!");
		    }
		    else if ((q1+q2)%2!=0 && p==0){
		    	System.out.println("Jogador 1 ganha!");
		    }
		    else {
		    	System.out.println("Jogador 2 ganha!");
		    }
		   }
	}

}
