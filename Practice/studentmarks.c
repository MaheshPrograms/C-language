
#include <stdio.h>
int main ()

{
    int marks [5] ;

    printf("Enter the marks of students in proper sequence\n") ;
    
    for ( int i = 1 ; i <= 5 ; i++ )
    {
        scanf("%d\n", &marks[i]) ;
    }

     for ( int i = 1 ; i <= 5 ; i++ )
    {
        printf("%d\n", marks[i]) ;
    }


    return 0 ;
}