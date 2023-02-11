
#include <stdio.h>

int main()

{

 int i , n ;

 i = 1 ;

 printf("Enter limiting natural number \n") ;

 scanf( "%d \n" , &n ) ;

 do

 {
     
     
     printf("%d \n" , i );

     i = i + 1 ;


 } 
 
 
 while ( i <= n );
 
return 0 ;

}