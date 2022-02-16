/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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
