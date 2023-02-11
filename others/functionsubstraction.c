
#include <stdio.h>

float sub( float m , float n  )

{

return m - n ;

}

float main ()
    
{

float m , n,  S ;

printf("Enter the numbers\n") ;

scanf("%f \n" , &m) ;

scanf("%f \n", &n) ;

S = sub(m,n) ;

printf("The substraction is %f \n" , S) ;

return 0 ;



}    