using System;
class pohonNatal {
  static void Main() {
    Console.Write("Masukan Tinggi Pohon : ");
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
            
        if(i==x){
            for(int m = 0; m < 3; m++){
                for(int o = 1; o < i; o++){
                Console.Write(" ");
                }
                
                for(int n = 0; n <= 0; n++){
                Console.Write("===");
                }
                
            Console.Write("\n");
            }
        }
    }
  }
}
