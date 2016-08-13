import java.util.Scanner;

public class Uri_1541 {

	public static void main(String[] args) {
		Scanner scan =new Scanner(System.in);
		int  a=0,b,c,d,e;
		
	while(scan.hasNext()){
		  a = scan.nextInt();	  
		  if(a==0){
			  break;
		  }
		  
		  b = scan.nextInt();
		  c = scan.nextInt();
		  
		  e =(a*b*100)/c;
		  d = (int) Math.sqrt(e);
		  System.out.println(d);
		  
	  }

	}

}
