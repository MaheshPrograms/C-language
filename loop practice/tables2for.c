
#include <stdio.h>

int main ()

{

int i , n , N ;

printf("Enter the number and number of terms\n") ;

scanf("%d \n" , &n ) ;

scanf("%d \n" , &N ) ;

for ( i = n ; i <= n*N ; i = i +n   )

{

printf("%d \n" , i ) ;

}

return 0 ;

}
