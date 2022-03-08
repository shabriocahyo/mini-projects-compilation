package main
import "fmt"

func main(){
    var x int
    fmt.Print("Masukan Lebar Persegi: ")
    fmt.Scan(&x)
    
    for i := 0; i <= x; i++ {
        for j := 0; j <= x; j++ {
            fmt.Print("* ");
        }
        fmt.Print("\n");
    }
}
