
#include <stdio.h>

struct student 
{
    int std ;
    char div ;
    int rno ;
    int marks ;
} ;

int main()

{
    struct student s[10] ;

    printf("Enter details of each student one by one ac. to following seq.\n") ;
    printf("1.Standard\n") ;
    printf("2.Division\n") ;
    printf("3.Roll number\n") ;
    printf("4.Marks\n") ;

    for ( int i = 0 ; i < 5 ; i++ )
    {
        scanf("%d\n", &s[i].std ) ; 
        scanf("%c\n", &s[i].div ) ;
        scanf("%d\n", &s[i].rno ) ;
        scanf("%d\n",&s[i].marks ) ;
    }

    for ( int i = 0 ; i < 5 ; i++ )
    {
        printf("Student S%d is in %dth standard\n", (i+1), s[i].std ) ;
        printf("Student s%d is in div %c\n", (i+1), s[i].div ) ;
        printf("Roll no. of student s%d is %d\n", (i+1), s[i].rno ) ;
        printf("Marks of student s%d are %d\n", (i+1), s[i].marks) ;
    }
    
    return 0 ;
}