#include <stdio.h>
int main()
{
    int x;
    printf("Masukan Lebar Belah Ketupat : ");
    scanf("%x", &x);
    for(int i = 1; i <= x; i++){
        for(int j = x; j >= i; j--){
            printf(" ");
        }
        
        for(int l = 2; l <= i; l++){
            printf("*");
        }
        
        for(int k = 1; k <= i; k++){
                printf("*");
            }
        printf("\n");
    }
    
    for(int i = 1; i <= (x - 1); i++){
        for(int j = x; j <= (i + x); j++){
            printf(" ");
        }
        
        for(int l = 0; l <= (x - i - 1); l++){
            printf("*");
        }
        
        for(int k = 0; k <= x-i-2; k++){
                printf("*");
            }
        printf("\n");
    }
    return 0;
}
