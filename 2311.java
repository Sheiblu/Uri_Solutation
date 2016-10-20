import java.util.Scanner;


public class sddsa {

	public static void main(String[] args) {
		Scanner scan  = new Scanner(System.in);
		String name;
		int loop=0;
		double high=-1,low=11, total = 0,cou,into;
		
		loop = scan.nextInt();
		
		for (int i = 0;i<loop;i++){
			name = scan.next();
			into = scan.nextDouble();
			for (int j = 0;j<7;j++){
			cou = scan.nextDouble();
			total += cou;
			
			if (cou>high){
				high = cou;
				//System.out.println("High is : "+high);
			}
			if (cou<low) {
				low = cou;
				//System.out.println("Low is : "+low);
			}
			}
			
			System.out.printf("%s %.2f\n",name,(total-high-low)*into);
			high = -1;
			low = 11;
			total = 0;
			
		}
		
	}

}
