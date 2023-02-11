#include <stdio.h>

int main ()

{
    int S, j ;
    j = 0 ;
    for (int i = 1000 ; i <= 2000 ; i= i+2)
    {
        printf("%d\n", i) ;
        
        
        S = i + j ; 
        j = S ;
    }

    printf("Sum is %d \n", j ) ;
    return 0 ;
}