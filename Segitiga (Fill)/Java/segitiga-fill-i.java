import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
	    
	    Scanner userInput = new Scanner(System.in);
    	
        System.out.print("Masukan Tinggi Segitiga : ");
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
	}
}
