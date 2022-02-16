#include <stdio.h>
int main(){
    int x;
    printf("Masukan Tinggi Pohon : ");
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
            
        if(i==x){
            for(int m = 0; m < 3; m++){
                for(int o = 1; o < i; o++){
                printf(" ");
                }
                
                for(int n = 0; n <= 0; n++){
                printf("===");
                }
                
            printf("\n");
            }
        }
    }
    return 0;
}
