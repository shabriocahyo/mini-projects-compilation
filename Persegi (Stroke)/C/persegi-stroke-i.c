#include <stdio.h>
int main()
{
    int x;
    printf("Masukan Lebar Persegi : ");
    scanf("%x", &x);
    
    for(int j = 0; j <= x; j++){
        printf("* ");
    }
    printf("\n");
    
    for(int i = 0; i <= (x-2); i++){
        printf("* ");
        for(int j = 0; j <= (x-2); j++){
            printf("  ");
        }
        printf("*\n");
    }
    
    for(int k = 0; k <= x; k++){
        printf("* ");
    }
    return 0;
}
