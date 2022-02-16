import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
	    
	    Scanner userInput = new Scanner(System.in);
    	
        System.out.print("Masukan Lebar Belah Ketupat : ");
        int x = userInput.nextInt();
        for(int i = 1; i <= x; i++){
            for(int j = x; j >= i; j--){
                System.out.print(" ");
            }
            
            for(int l = 2; l <= i; l++){
                System.out.print("*");
            }
            
            for(int k = 1; k <= i; k++){
                    System.out.print("*");
                }
            System.out.println("");
        }
        
        for(int i = 1; i <= (x - 1); i++){
            for(int j = x; j <= (i + x); j++){
                System.out.print(" ");
            }
            
            for(int l = 0; l <= (x - i - 1); l++){
                System.out.print("*");
            }
            
            for(int k = 0; k <= x-i-2; k++){
                System.out.print("*");
            }
            System.out.println("");
        }
	}
}
