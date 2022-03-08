package main
import "fmt"

func main(){
    var x int
    fmt.Print("Masukan Lebar Persegi: ")
    fmt.Scan(&x)
    
    for j := 0; j <= x; j++ {
        fmt.Print("* ");
    }
    fmt.Print("\n");
    
    for i := 0; i <= (x-2); i++ {
        fmt.Print("* ");
        for j := 0; j <= (x-2); j++ {
            fmt.Print("  ");
        }
        fmt.Print("*\n");
    }
    
    for k := 0; k <= x; k++ {
        fmt.Print("* ");
    }
}
