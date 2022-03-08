package main
import "fmt"

func main(){
    var x int
    fmt.Print("Masukan Tinggi Pohon: ")
    fmt.Scan(&x)
    
    for i := 1; i <= x; i++ {
        for j := x; j >= i; j-- {
            fmt.Print(" ")
        }
        
        for l := 2; l <= i; l++ {
            fmt.Print("*")
        }
        
        for k := 1; k <= i; k++ {
            fmt.Print("*")
        }
            
        fmt.Print("\n")
            
        if i==x {
            for m := 0; m < 3; m++ {
                for o := 1; o < i; o++ {
                    fmt.Print(" ")
                }
                
                for n := 0; n <= 0; n++ {
                    fmt.Print("===")
                }
                fmt.Print("\n")
            }
        }
    }
}
