import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
	    
	    Scanner userInput = new Scanner(System.in);
    	
        System.out.print("Masukan Lebar Persegi : ");
        int x = userInput.nextInt();
        
        for(int j = 0; j <= x; j++){
            System.out.print("* ");
        }
        System.out.println("");
        
        for(int i = 0; i <= (x-2); i++){
            System.out.print("* ");
            for(int j = 0; j <= (x-2); j++){
                System.out.print("  ");
            }
            System.out.println("*");
        }
        
        for(int k = 0; k <= x; k++){
            System.out.print("* ");
        }
	}
}
