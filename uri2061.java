import java.util.Scanner;

public class uri2061 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		
		int totalNum, num;
		num = scan.nextInt();
		totalNum = scan.nextInt();
		String click ;
		
		for (int i = 0; i<totalNum ;i++){
			click = scan.next();
			if(click.equals("fechou")){
				
			   num++;
			   }
		     else
		      {
			num--; 
		      }
	}
		if(num<0){
			num = 0;
		}
		System.out.println(num);	
	}
}


