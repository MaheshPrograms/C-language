
#include <stdio.h>

int main()

{

int i , n ;

i = 1 ;

printf("Enter number of terms \n") ;

scanf("%d \n" , &n ) ;

for ( i = 1 ; i <= n ; i++  )

{

printf("%d X %d = %d \n" , i , i , i*i ) ;

}

return 0 ;

}