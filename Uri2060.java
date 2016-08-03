import java.util.Scanner;

public class Uri2060 {

	public static void main(String[] args) {
		
		
		Scanner scan = new Scanner(System.in);
		
		int totalNum, num2 = 0,num3 = 0,num4 =0,num5 =0, givenum;
		
		totalNum = scan.nextInt();
		
		for(int i =0 ;i<totalNum;i++){
			givenum =  scan.nextInt();
			if (givenum % 2 == 0){
				num2++;			}
			if (givenum % 3 == 0){
				num3++;			}
			if (givenum % 4 == 0){
				num4++;		}
			if (givenum % 5 == 0){
				num5++;			}
		}
		System.out.printf("%d Multiplo(s) de 2\n",num2);
		System.out.printf("%d Multiplo(s) de 3\n",num3);
		System.out.printf("%d Multiplo(s) de 4\n",num4);
		System.out.printf("%d Multiplo(s) de 5\n",num5);
		
	}

}
