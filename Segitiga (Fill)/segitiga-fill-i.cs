using System;
class fillSegitiga {
  static void Main() {
    Console.Write("Masukan Tinggi Segitiga : ");
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
  }
}
