import java.util.Scanner;

public class Uri1118 {

	public static void main(String[] args) {
		double num=0 ,num1, num2=99999;
		int cou = 0 , m = 1;
		Scanner scan = new Scanner (System.in);
		
	while(m == 1){	
		num1 = scan.nextDouble();
		
		while (num1 < 0 || num1 > 10){
			System.out.println("nota invalida");
			num1 = scan.nextDouble();
		}
		
		num = num+ num1;
		cou ++;
		
		while( cou == 2){
			
			if (num2 == 99999){
				System.out.printf("media = %.2f\n",num/2);
			}
			else if(num2 == 1){
			  cou = 0;
			  num2 = 99999;
			  num = 0;
			  break;
			}
			
			else if (num2 == 2){
				m = 0;
				break;
			}
			
			System.out.printf("novo calculo (1-sim 2-nao)\n");
			num2 = scan.nextDouble();
		}
	 }		
	}

}
