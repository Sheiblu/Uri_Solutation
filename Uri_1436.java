import java.util.Scanner;

public class Uri_1436 {

	public static void main(String[] args) {
		Scanner scan =new Scanner(System.in);
		  
		  int loop, a=0,b=0,c,ans=0;
		  loop= scan.nextInt();
		  
		  for (int i= 0;i<loop;i++){
		   a = scan.nextInt();
		    b = (a/2)+1;
		  
		  for (int j=1;j<=a;j++){
			 c = scan.nextInt();
			 if (j==b){
				 ans = c;
			 }
		  }
		  System.out.println("Case "+(i+1)+": "+ans);  
		}
	}

}
