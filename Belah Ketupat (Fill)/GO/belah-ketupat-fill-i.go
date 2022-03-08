package main
import "fmt"

func main(){
    var x int
    fmt.Print("Masukan Lebar Belah Ketupat: ")
    fmt.Scan(&x)
    
    for i := 1; i <= x; i++ {
        for j := x; j >= i; j-- {
            fmt.Print(" ");
        }
        
        for l := 2; l <= i; l++ {
            fmt.Print("*");
        }
        
        for k := 1; k <= i; k++ {
            fmt.Print("*");
        }
        fmt.Print("\n");
    }
    
    for i := 1; i <= (x - 1); i++ {
        for j := x; j <= (i + x); j++ {
            fmt.Print(" ");
        }
        
        for l := 0; l <= (x - i - 1); l++ {
            fmt.Print("*");
        }
        
        for k := 0; k <= x-i-2; k++ {
            fmt.Print("*");
        }
        fmt.Print("\n");
    }
}
