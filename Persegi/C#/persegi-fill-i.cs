using System;
class fillPersegi {
  static void Main() {
    Console.Write("Masukan Lebar Persegi : ");
    int x = int.Parse(Console.ReadLine());
    for(int i = 0; i <= x; i++){
        for(int j = 0; j <= x; j++){
            Console.Write("* ");
        }
        Console.Write("\n");
    }
  }
}
