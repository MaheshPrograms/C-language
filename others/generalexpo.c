
#include <stdio.h>

#include <math.h>

float main (){

float y , a , x, u , p ;

    printf("Enter base and index\n") ;
    scanf("%f \n" , &a) ;
    scanf("%f \n" , &x) ;

  p = log2(a) ;
  u = x * p ;
  y = exp2(u) ;

    printf("y = expa(x) = %f " , y ) ;

 return 0 ;   

}
