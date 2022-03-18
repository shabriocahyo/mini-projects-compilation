import java.util.Scanner;

public class main{
	public static void main(String[] args){
	    
	    Scanner userInput = new Scanner(System.in);
        
        System.out.print("Masukan Panjang Deret: ");
        int x = userInput.nextInt();

        int f1 = 0;
        int f2 = 1;
        System.out.print(f1 + " " + f2 + " ");

        for(int i=1; i<x; i++){
            int f3 = f1 + f2;
            System.out.print(f3 + " ");
            f1 = f2;
            f2 = f3;
        }
	}
}
