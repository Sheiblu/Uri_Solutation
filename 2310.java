import java.util.Scanner;


public class 2310 {

	public static void main(String[] args) {
		Scanner scan  = new Scanner(System.in);
		String name;
		int loop=0;
		double s=0,Ts=0,b=0,Tb=0,a=0,Ta=0,mai;
		
		loop = scan.nextInt();
		
		for (int i = 0;i<loop;i++){
			name = scan.next();
			mai = scan.nextDouble();
			s += mai;
			mai = scan.nextDouble();
			b += mai;
			mai = scan.nextDouble();
			a += mai;
			mai = scan.nextDouble();
			Ts += mai;
			mai = scan.nextDouble();
			Tb += mai;
			mai = scan.nextDouble();
			Ta += mai;		
			
		}
			
		System.out.printf("Pontos de Saque: %.2f %%.\n",(Ts/s/.01));
		System.out.printf("Pontos de Bloqueio: %.2f %%.\n",(Tb/b/.01));
		System.out.printf("Pontos de Ataque: %.2f %%.\n",(Ta/a/.01));
		
	}

}
