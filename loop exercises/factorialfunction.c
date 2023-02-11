
#include <stdio.h>

int fact ( int n )
{
    if ( n == 0 || n == 1 )
    return 1 ;

    else 
    return n * fact (n-1) ;
}

int main ()

{
    int n ;

    printf("Enter the no. you want factorial of\n") ;
    scanf("%d\n", &n) ;

    printf("Factorial is %d\n", fact(n)) ;

    return 0 ;
}