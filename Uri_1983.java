package File.Experiment;
import java.util.*;

public class Uri_1983 {
 
    public static void main(String[] args) {
    	Scanner scan  = new Scanner(System.in);
    	
        int loop  , mainid = 0, id;
        double count = 0, point;
        loop = scan.nextInt();
        for (int i = 0;i<loop;i++){
        	id = scan.nextInt();
        	point = scan.nextDouble();
        	
        	if (point >= count){
        		count = point;
        		mainid = id;
        	}
        }
        
        if (count >= 8.0){
        	System.out.println(mainid);
        }
        else {
        	System.out.println("Minimum note not reached");
        }
    }
 
}