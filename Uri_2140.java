import java.util.Scanner;

public class Uri_2140 {
public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
		int run = 1, pos = 0 ;
		int fast, dec, sec;
		int tak [] = {7,12,15,22,25,30,52,60,70,55,102,105,110,120,150};
		
		while (run == 1){
			
			fast = scan.nextInt();
			sec = scan.nextInt();
			dec = sec- fast;
			
			if (fast ==0 && sec == 0){
				break;
			}
			
			for (int i = 0;i<15;i++){
				if (tak[i] == dec){
					pos = 1;
					break;
				}
			}
			
			if (pos==1){
				System.out.println("possible");
				pos=0;
			}
			else {
				System.out.println("impossible");
			}
			
		 }
		
		}
}
