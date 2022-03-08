package main
import "fmt"

func main(){
    var x int
    fmt.Print("Masukan Tinggi Segitiga: ")
    fmt.Scan(&x)
    
    for h := 1; h <= x + 1; h++ {
        fmt.Print(" ")
    }
    fmt.Print("*\n")
    
    for i := 1; i <= x; i++ {
        for j := x; j >= i; j-- {
            fmt.Print(" ")
        }
        
        for l := 1; l <= 1; l++ {
            fmt.Print("*")
        }
        
        for k := 1; k <= i; k++ {
            fmt.Print(" ")
        }
        
        for m := 2; m <= i; m++ {
            fmt.Print(" ")
        }  
         
        fmt.Print("*")
        fmt.Print("\n")
    }
    
    for o := 1; o <= x + 2; o++ {
        fmt.Print("* ")
    }
}
