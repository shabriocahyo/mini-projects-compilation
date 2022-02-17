using System;
class strokePersegi {
  static void Main() {
    Console.Write("Masukan Lebar Persegi : ");
    int x = int.Parse(Console.ReadLine());
    
    for(int j = 0; j <= x; j++){
        Console.Write("* ");
    }
    Console.Write("\n");
    
    for(int i = 0; i <= (x-2); i++){
        Console.Write("* ");
        for(int j = 0; j <= (x-2); j++){
            Console.Write("  ");
        }
        Console.Write("*\n");
    }
    
    for(int k = 0; k <= x; k++){
        Console.Write("* ");
    }
  }
}
