#include <stdio.h>

float main ()

{

    float p , q ;

    printf("Enter two numbers \n") ;
    scanf("%f\n" , &p ) ;
    scanf("%f\n" , &q ) ;

    if ( p < q )

    {
        printf("%f is smaller\n" , p ) ;
    }


    else 

    {
        printf("%f is smaller\n" , q ) ;
    }


    return 0 ;
}