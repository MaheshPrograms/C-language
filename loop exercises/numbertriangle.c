#include <stdio.h>

int print ( int n )
{
   for ( int i = 1 ; i <= n ; i++ )
   {
       printf("%d " , i) ;
   }
}

int main ()

{
    int i, n ;

    printf("Enter no. of rows\n") ;
    scanf("%d\n" , &n ) ;

    for ( i = 1 ; i <= n ; i++ )
    {
        print(i) ;
        printf("\n") ;
    }

    return 0;
}