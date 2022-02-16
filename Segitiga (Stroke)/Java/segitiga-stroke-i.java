import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
	    
	    Scanner userInput = new Scanner(System.in);
    	
        System.out.print("Masukan Tinggi Segitiga : ");
        int x = userInput.nextInt();
        
        for(int h = 1; h <= x + 1; h++){
            System.out.print(" ");
        }
        System.out.println("*");
        
        for(int i = 1; i <= x; i++){
            for(int j = x; j >= i; j--){
                System.out.print(" ");
            }
            
            for(int l = 1; l <= 1; l++){
                System.out.print("*");
            }
            
            for(int k = 1; k <= i; k++){
                System.out.print(" ");
            }
            
            for(int m = 2; m <= i; m++){
                System.out.print(" ");
            }  
             
            System.out.print("*");
            System.out.println("");
        }
        
        for(int o = 1; o <= x + 2; o++){
            System.out.print("* ");
        }
	}
}
