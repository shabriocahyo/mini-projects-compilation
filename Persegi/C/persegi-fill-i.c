#include <stdio.h>
int main(){
    int x;
    printf("Masukan Lebar Persegi : ");
    scanf("%x", &x);
    for(int i = 0; i <= x; i++){
        for(int j = 0; j <= x; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
