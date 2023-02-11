#include <stdio.h>
int main ()

{
    int N , n, i ;

    printf("Enter the number you want multi. table of and no. of terms\n") ;
    scanf("%d\n %d\n" , &n , &N ) ;

    for ( i = 1 ; i <= N ; i++ )
    {
        printf("%d X %d = %d \n" , n , i , n*i ) ;
    }

    return 0 ;
}