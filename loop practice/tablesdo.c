
#include <stdio.h>

int main()

{

int i , n , tn ;

printf("Enter number and no. of terms \n") ;

scanf("%d \n", &n) ;

scanf("%d \n", &tn) ;

i = 1 ;

do 

 { 
     
     printf("%d X %d = %d \n" , n , i , n*i ) ;
     
     i = i + 1 ;
} 

while ( i <= tn ) ;


return 0 ;

}