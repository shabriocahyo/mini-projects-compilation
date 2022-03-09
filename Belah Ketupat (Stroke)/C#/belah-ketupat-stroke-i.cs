using System;
class strokebelahketupat{
  static void Main(){
    Console.Write("Masukan Lebar Belah Ketupat: ");
    int x = int.Parse(Console.ReadLine());
    
    for(int h = 1; h <= x + 1; h++){
        Console.Write(" ");
    }
    
    Console.Write("*\n");
    
    for(int i = 1; i <= x; i++){
        for(int j = x; j >= i; j--){
            Console.Write(" ");
        }
        
        for(int l = 1; l <= 1; l++){
            Console.Write("*");
        }
        
        for(int k = 1; k <= i; k++){
            Console.Write(" ");
        }
        
        for(int m = 2; m <= i; m++){
            Console.Write(" ");
        }  
         
        Console.Write("*\n");
    }
    
    Console.Write("*");
    
    for(int v = 0; v <= x*2; v++){
        Console.Write(" ");
    }
    
    Console.Write("*\n");
    
    for(int p = 0; p <= x-1; p++){
        for(int q = 0; q <= p; q++){
            Console.Write(" ");
        }
        
        Console.Write("*");
        
        for(int s = x-1; s >= p; s--){
            Console.Write(" ");
        }
        
        for(int t = x-2; t >= p; t--){
            Console.Write(" ");
        }  
         
        Console.Write("*\n");
    }
    
    for(int u = 1; u <= x+1; u++){
        Console.Write(" ");
    }
    
    Console.Write("*");
  }
}
