
#include <stdio.h>

int main ()

{

int i , n , tn ;

printf("Enter the number and no. of terms \n") ;

scanf("%d \n" , &n ) ;

scanf("%d \n" , &tn ) ;

for ( i = 1 ; i <= tn ; i++  )

{

printf( "%d X %d = %d \n" , n , i , n*i ) ;

}




return 0 ;

}