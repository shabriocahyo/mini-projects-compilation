package main
import "fmt"

func main(){
    var x int
    fmt.Print("Masukan Tinggi Segitiga: ")
    fmt.Scan(&x)
    
    for i := 1; i <= x; i++ {
        for j := x; j >= i; j-- {
            fmt.Printf(" ")
        }
        
        for l := 2; l <= i; l++ {
            fmt.Printf("*")
        }
        
        for k := 1; k <= i; k++ {
            fmt.Printf("*")
        }
        fmt.Printf("\n")
    }
}
