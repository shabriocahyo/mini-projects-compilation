import java.util.Scanner;

public class Main{
	public static void main(String[] args) {
	    
	    Scanner userInput = new Scanner(System.in);
    	
        System.out.print("Masukan Tinggi Pohon : ");
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
                
            if(i==x){
                for(int m = 0; m < 3; m++){
                    for(int o = 1; o < i; o++){
                    System.out.print(" ");
                    }
                    
                    for(int n = 0; n <= 0; n++){
                    System.out.print("===");
                    }
                    
                System.out.println("");
                }
            }
        }
	}
}
