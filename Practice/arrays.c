#include <stdio.h>

int main ()

{
    int marks [5] ;

    marks [1] = 80 ;
    marks [2] = 85 ;
    marks [3] = 87 ;
    marks [4] = 95 ;
    marks [5] = 92 ;

    for ( int i = 1 ; i <= 5 ; i++ )
    {
        printf("Marks of student %d are %d\n" , i, marks[i] ) ;
    }

    return 0 ;
}