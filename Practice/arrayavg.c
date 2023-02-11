#include <stdio.h>

float avg ( float arr[], int n )
{
    float S ;
    int i = 0 , j = 0 ;
    for ( i = 0 ; i < n ; i++ )
    {
        S = arr[i] + j ;
        j = S ;
    }

    return (j / n) ;
} 

float avg1 ( float *p , int n )
{
    float S ;
    int j = 0 ;
    for ( int i = 0 ; i<n ; i++ )
    {
        S = j + (*(p + i) );
        j = S;
    }
    return (j / n) ;
}

float main()

{
    float arr[100] ;
    int n ;

    printf("Enter and no. of elements you are going to enter and enter all the elements\n") ;
    scanf("%d\n", &n ) ;

    for ( int i = 0 ; i<n ; i++ )
    {
        scanf("%f\n", &arr[i] ) ;
    }

    printf("The  average is %f\n" , avg ( arr , n ) ); 
    printf("The  average is %f\n" , avg1 ( arr , n ) ); 

    return 0 ;
}