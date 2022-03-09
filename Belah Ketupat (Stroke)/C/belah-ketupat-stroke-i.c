#include <stdio.h>
int main(){
    
    int x;
    printf("Masukan Lebar Belah Ketupat: ");
    scanf("%x", &x);
    
    for(int h = 1; h <= x + 1; h++){
        printf(" ");
    }
    
    printf("*\n");
    
    for(int i = 1; i <= x; i++){
        for(int j = x; j >= i; j--){
            printf(" ");
        }
        
        for(int l = 1; l <= 1; l++){
            printf("*");
        }
        
        for(int k = 1; k <= i; k++){
            printf(" ");
        }
        
        for(int m = 2; m <= i; m++){
            printf(" ");
        }  
         
        printf("*\n");
    }
    
    printf("*");
    
    for(int v = 0; v <= x*2; v++){
        printf(" ");
    }
    
    printf("*\n");
    
    for(int p = 0; p <= x-1; p++){
        for(int q = 0; q <= p; q++){
            printf(" ");
        }
        
        printf("*");
        
        for(int s = x-1; s >= p; s--){
            printf(" ");
        }
        
        for(int t = x-2; t >= p; t--){
            printf(" ");
        }  
         
        printf("*\n");
    }
    
    for(int u = 1; u <= x+1; u++){
        printf(" ");
    }
    
    printf("*");

    return 0;
}
