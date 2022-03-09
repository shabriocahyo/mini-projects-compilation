import java.util.Scanner;

public class Main{
	public static void main(String[] args){
	    
	    Scanner userInput = new Scanner(System.in);
        
        System.out.print("Masukan Lebar Belah Ketupat: ");
        int x = userInput.nextInt();
      
        for(int h = 1; h <= x + 1; h++){
            System.out.print(" ");
        }
       
        System.out.print("*\n");
       
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
            
            System.out.print("*\n");
        }
    
        System.out.print("*");
    
        for(int v = 0; v <= x*2; v++){
            System.out.print(" ");
        }
    
        System.out.print("*\n");
    
        for(int p = 0; p <= x-1; p++){
            for(int q = 0; q <= p; q++){
                System.out.print(" ");
            }
           
            System.out.print("*");
           
            for(int s = x-1; s >= p; s--){
               System.out.print(" ");
            }
          
            for(int t = x-2; t >= p; t--){
                System.out.print(" ");
            }  
          
            System.out.print("*\n");
        }
        
        for(int u = 1; u <= x+1; u++){
            System.out.print(" ");
        }
    
        System.out.print("*");
	}
}
