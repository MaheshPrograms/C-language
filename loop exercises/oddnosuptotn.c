#include <stdio.h>
int main ()

{
    int tn , i, C, S, j = 0 ;

    printf("Enter the appropriate code and no. upto which nos are to be print\n") ;
    printf("Code for odd numbers is 1 \n") ;
    printf("Code for odd numbers is 2 \n") ;
    scanf("%d\n" , &C) ;
    scanf("%d\n" , &tn) ;

    switch (C)
    {
        case 1 :
        {
            for ( i = 1 ; i <= tn ; i = i + 2 )
            {
                printf("%d\n" , i) ;
            }

            for ( i = 1 ; i <= tn ; i = i + 2 )
            {
                S = i + j ;
                j = S ;
            }
            printf("The sum is %d\n", j) ;

            break ;
        }

        case 2 :
        {
            for ( i = 2 ; i <= tn ; i = i + 2)
            {
                printf("%d\n" , i ) ;
            }

            for ( i = 2 ; i <= tn ; i = i + 2 )
            {
                S = i + j ;
                j = S ;
            }

            printf("The sum is %d\n ", j ) ;
        }

        default :
        {
            printf("Invalid Code entered \n") ;
        }
    }

    return 0 ;

}