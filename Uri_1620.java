import java.util.Scanner;

public class Uri_1620 {

	public static void main(String[] args) {
		Scanner scan =new Scanner(System.in);
		    double a,l,i,x,d;

		       while(scan.hasNext()){
		    	   
		       l = scan.nextDouble();

		        if (l==0){
		            break;}

		        i = l+(l-3);
		        a = i-l;

		        if (a==0){
		            l=0;
		        }
		        else {
		            l = a/l;
		        }

		        System.out.printf("%.6f\n",l);
		         }

	}

}
