import java.util.Scanner;

public class Uri_1953 {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int loop ;
		int EPR = 0 , EHD = 0 ,opp =0;
		int input;
		String name;
		
		while(scan.hasNext()){
			
			 loop = scan.nextInt();
		
		for (int i = 0;i<loop;i++){
			input = scan.nextInt();
			name  = scan.next();
			
			if (name.equalsIgnoreCase("EPR")){
				EPR++;
			}
			
			else if (name.equalsIgnoreCase("EHD")){
				EHD++;				
		    }
			
			else {
				opp++ ;
			}	
		}
		
		System.out.println("EPR: "+EPR);
		System.out.println("EHD: "+EHD);
		System.out.println("INTRUSOS: "+opp);
		
		EPR =0;
		EHD = 0;
		opp = 0;				
		}

	}

}
