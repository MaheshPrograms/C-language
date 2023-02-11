#include <stdio.h>
int main()

{
    int i , n ;
    i = 1 ;

    printf("Enter no. of terms to be print\n") ;
    scanf("%d\n" , &n) ;

    for ( i = 1 ; i <= n ; i++ )
    {
        printf("%d\n" , (i*i*i*i)-(i*i)+1) ;
    }

    return 0 ;
}