
#include <stdio.h>

int main ()

{

int i , n , N  ;

i = 0 ;


printf("Enter the number and number of terms \n") ;

scanf("%d \n " , &n ) ;


scanf("%d \n " , &N ) ;

do 

{

i = i + n ;

printf(" %d \n" , i ) ;



}

while ( i < N*n ) ;

return 0 ;


}