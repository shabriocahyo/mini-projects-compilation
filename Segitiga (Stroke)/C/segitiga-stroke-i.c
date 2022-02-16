#include <stdio.h>
int main()
{
    int x;
    printf("Masukan Tinggi Segitiga : ");
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
         
        printf("*");
        printf("\n");
    }
    
    for(int o = 1; o <= x + 2; o++){
        printf("* ");
    }
    return 0;
}
