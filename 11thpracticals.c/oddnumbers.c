#include <stdio.h>

int main() 

{

    int i , n ;
    i = 1 ;

    printf("Enter no. of odd numbers to be print\n") ;
    scanf("%d\n" , &n ) ;

    for ( i = 1 ; i <= (2*n -1 ) ; i = i + 2  )

    {

        printf("%d\n" , i) ;

    }


    return 0 ;
    
}