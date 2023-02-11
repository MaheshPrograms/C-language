
#include <stdio.h>

int main()

{

int a , d , n , tn , Sn, i = 0 ;

printf("Enter first term , difference and number of terms\n") ;

scanf("%d \n",&a ) ; 

scanf("%d \n",&d ) ; 

scanf("%d \n",&n) ; 

do 

{ 

printf("%d \n" , a + i*d ) ; 

i = i + 1 ;

}

while ( i <= (n-1) ) ;

Sn = 0.5 * n * (2*a + (n-1)*d) ;

printf("The sum is %d \n", Sn) ;


return 0 ;


}