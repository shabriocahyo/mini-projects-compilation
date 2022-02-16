import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
	    
	    Scanner userInput = new Scanner(System.in);
    	
        System.out.print("Masukan Lebar Persegi : ");
        int x = userInput.nextInt();
        for(int i = 0; i <= x; i++){
            for(int j = 0; j <= x; j++){
                System.out.print("* ");
            }
            System.out.println("");
        }
	}
}
