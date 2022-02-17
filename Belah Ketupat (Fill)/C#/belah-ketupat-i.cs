using System;
class belahKetupat {
  static void Main() {
    Console.Write("Masukan Lebar Belah Ketupat : ");
    int x = int.Parse(Console.ReadLine());
    for(int i = 1; i <= x; i++){
        for(int j = x; j >= i; j--){
            Console.Write(" ");
        }
        
        for(int l = 2; l <= i; l++){
            Console.Write("*");
        }
        
        for(int k = 1; k <= i; k++){
                Console.Write("*");
            }
        Console.Write("\n");
    }
    
    for(int i = 1; i <= (x - 1); i++){
        for(int j = x; j <= (i + x); j++){
            Console.Write(" ");
        }
        
        for(int l = 0; l <= (x - i - 1); l++){
            Console.Write("*");
        }
        
        for(int k = 0; k <= x-i-2; k++){
                Console.Write("*");
            }
        Console.Write("\n");
    }
  }
}
