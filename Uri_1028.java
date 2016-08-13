import java.util.Scanner;

public class Uri_1028 {

	public static void main(String[] args) {
		Scanner scan =new Scanner(System.in);
		int  a=0,b,c,loop;
		loop = scan.nextInt();
		
		for (int i= 0;i<loop;i++){
		  a = scan.nextInt();
		  b =scan.nextInt();
		  if (b>a){
			  c=a;
			  a=b;
			  b=c;
		  }
		  
		  while(a%b!=0){
			  c=a;
		      a=b;
		      b=c%b;
		  }
		  
		 System.out.println(b);
		}
			
	}

}