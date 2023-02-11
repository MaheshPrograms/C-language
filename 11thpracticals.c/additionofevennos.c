
#include<stdio.h>

int main()

{

    int n , i, j, S ;
    i = 2 ;
    j = 0 ;

    printf("Enter the number of even numbers to be considered \n") ;
    scanf("%d\n" , &n ) ;
/*
    for ( i = 2 ; i <= (2*n) ; i = i + 2 )
    {
        S = i + j ;
        j = S ;
    }*/

    S = (n * (n + 1)) ;

    printf("The sum is %d\n" , S) ;

    return 0 ;

}

    