package main
import "fmt"

func main() {
    var x int
    fmt.Print("Masukan Lebar Belah Ketupat: ")
    fmt.Scan(&x)
    
    for h := 1; h <= x + 1; h++ {
        fmt.Print(" ");
    }
    
    fmt.Print("*\n");
    
    for i := 1; i <= x; i++ {
        for j := x; j >= i; j-- {
            fmt.Print(" ");
        }
        
        for l := 1; l <= 1; l++ {
            fmt.Print("*");
        }
        
        for k := 1; k <= i; k++ {
            fmt.Print(" ");
        }
        
        for m := 2; m <= i; m++ {
            fmt.Print(" ");
        }  
         
        fmt.Print("*\n");
    }
    
    fmt.Print("*");
    
    for v := 0; v <= x*2; v++ {
        fmt.Print(" ");
    }
    
    fmt.Print("*\n");
    
    for p := 0; p <= x-1; p++ {
        for q := 0; q <= p; q++ {
            fmt.Print(" ");
        }
        
        fmt.Print("*");
        
        for s := x-1; s >= p; s-- {
            fmt.Print(" ");
        }
        
        for t := x-2; t >= p; t-- {
            fmt.Print(" ");
        }  
         
        fmt.Print("*\n");
    }
    
    for u := 1; u <= x+1; u++ {
        fmt.Print(" ");
    }
    
    fmt.Print("*");
}
