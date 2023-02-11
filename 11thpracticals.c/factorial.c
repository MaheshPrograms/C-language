
#include <stdio.h>

int main ()

{

    int i , j , f, n ;
    i = 1 ;
    j = 1 ;

    printf("Enter the number you want factorial of\n") ;
    scanf("%d\n", &n) ;

    for ( i = 1 ; i <= n  ; i++ )

    { 

        f = i * j ;

        j = f ;  

    }


    printf("Factorial of given number is %d \n" , j ) ;

    return 0 ;

}