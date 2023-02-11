
#include <stdio.h>

int main()

{

int i , j , S, tn ;

printf("Enter the last term \n") ;

scanf("%d \n" , &tn) ;

i = 0 ;

j = 1 ;

printf("%d \n" , i) ;

printf("%d \n" , j ) ;

for ( S = i + j ; S < tn ; i =j , j = S )

{ 
    S = i + j ;
    
    printf("%d \n" , S ) ;  }

return 0 ;


}