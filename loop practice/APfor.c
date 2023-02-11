
#include <stdio.h>

int main()

{

int a , d , n , Sn, i ;

printf("Enter first term, difference and number of terms \n ") ;

scanf("%d \n" , &a ) ;
scanf("%d \n" , &d ) ;
scanf("%d \n" , &n ) ;



for ( i = 0 ; i < n ; i++  )

{

printf("%d \n" , a + i*d) ;

}

Sn = 0.5*n*( 2*a + (n-1)*d  ) ;

printf("The sum is %d \n" , Sn) ;

return 0 ;

}