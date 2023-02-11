#include <stdio.h>

float main ()

{
    float array [7] = { 12, 15, 7, 9, 14, 17, 11 } ;

    for ( int i = 0 ; i <= 6 ; i = i + 2 )
    {
        printf("%f \n", array[i] ) ;
    }

    return 0 ;
}