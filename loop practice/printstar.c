
#include <stdio.h>

void printstar (int n) 

{

for ( int i = 0 ; i < n ; i++ )

{ printf("%c" , '*') ;   }

}

int main()

{

int n ;

printf("Enter number of stars required \n" ) ;

scanf ("%d \n" , &n) ;

printstar(n) ;

return 0 ;

}