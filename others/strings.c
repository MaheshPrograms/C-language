/*
#include <stdio.h>

int main()

{
    char name [50] = "Mahesh" ;

    int i = 0 ;

    for ( i = 0 ; i<=5 ; i++ )
    {
        printf("%c", name[i] ) ;
    }
    
    return 0 ;
}  */

#include <stdio.h>

void printname ( char str[] )
{
    int i = 0 ; 
    while ( str[i] |= '\0' )
    {
        printf("%c", str[i] ) ;
        i ++ ;
    }

}

int main()

{
    char string[] = "Mahesh" ;
    printname(string) ;
    return 0 ;
}