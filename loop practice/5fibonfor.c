
#include <stdio.h>

int main()

{

int i , j , tn, S ;

i = 0 ;
printf("Enter the number and the last term\n") ;

scanf("%d \n" , &j ) ;

scanf("%d \n" , &tn ) ;

printf("%d\n" , i ) ;

printf("%d\n" , j ) ;

for ( S = i + j ; j < tn ; i = j , j = S  )

{

    S = i + j ;

printf("%d \n" , S) ;

}
 

return 0 ;

}