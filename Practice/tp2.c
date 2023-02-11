
#include <stdio.h>

float main ()

{
    float n ;
    printf("Enter the number \n ") ;
    scanf("%f\n", &n ) ;

    float  j, S ;
    S = 0 ;
    for (int i = 2 ; i<=n ; i = i + 2)
    {
        
        float p = (1/i) ;
        S = p + S ;
        
    }
    printf("The sum is %f\n", S ) ;
    return 0 ;
} 