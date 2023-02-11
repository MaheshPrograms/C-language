
#include <stdio.h>

float Mult( float x , float y)

{

return x * y ;

}

float main ()

{

float x,  y, M ;

printf("Enter the numbers \n" ) ;

scanf("%f \n" , &x ) ;

scanf("%f \n" , &y ) ;

M =  Mult(x,y) ;

printf("The multiplication is %f \n", M) ;

return 0 ;




}