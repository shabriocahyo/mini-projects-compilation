using System;
class HelloWorld {
  static void Main() {
    Console.Write("Masukan Tinggi Segitiga : ");
    int x = int.Parse(Console.ReadLine());;
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
         
        Console.Write("*");
        Console.Write("\n");
    }
    
    for(int o = 1; o <= x + 2; o++){
        Console.Write("* ");
    }
  }
}
