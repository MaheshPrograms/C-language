
#include <stdio.h>

int main()

{

int i , N ;

printf("Enter number of terms \n") ;

scanf("%d \n" , &N ) ;

i = 1 ;

do

{

printf( "%d \n" , i*i ) ;

i = i + 1 ;

}

while ( i<=N ) ;

return 0 ;



}