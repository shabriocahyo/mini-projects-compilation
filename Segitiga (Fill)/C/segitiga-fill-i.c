#include <stdio.h>
int main(){
    int x;
    printf("Masukan Tinggi Segitiga : ");
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
    return 0;
}
