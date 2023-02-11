#include <stdio.h>
int main ()

{
    int array[100], n, x ;

    printf("Enter no of terms you are going to enter and then enter numbers \n") ;
    printf("Also enter the term of which position is to be determined\n") ;
    scanf("%d\n", &n ) ;
    for ( int i = 0 ; i <= (n-1) ; i++ )
    {
        scanf("%d \n", &array[i] ) ;
    }
    scanf("%d\n", &x ) ;

    for ( int i = 0 ; i <= (n) ; i++ )
    {
        if ( array[i] == x )
        {
            printf("Element %d is at position %d \n" , x, i + 1 ) ;
           
        }

        else if ( i == n )
        {
            printf("Number not found\n") ;
        }
    }
}