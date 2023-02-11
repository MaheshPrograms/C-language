
#include <stdio.h>

struct student
{
    char nm ;
    int yr ;
    int cls ; 
    int rl ;
};


int main()

{
    int n ;
    struct student s[100] ;

    printf("Enter no of stds and following details of students\n") ;
    printf("1. Name\n") ;
    printf("2.Year of study\n") ;
    printf("3.Class\n") ;
    printf("4.Sr. No. in class\n") ;

    scanf("%d\n", &n ) ;

    for ( int i = 1 ; i<=n ; i++ )
    {
        scanf("%c\n", &s[i].nm ) ;
        scanf("%d\n", &s[i].yr ) ;
        scanf("%d\n", &s[i].cls ) ;
        scanf("%d\n", &s[i].rl ) ;
    }

    for ( int i = 1 ; i<=n ; i++ )
    {
        if ( s[i].cls > 9 && s[i].rl>9 )
        {
            printf("Roll no of student %c is %d%d%d\n", s[i].nm , s[i].yr, s[i].cls, s[i].rl ) ;
        }
 
        else if ( s[i].cls < 9 && s[i].rl>9 )
        {
            printf("Roll no of student %c is %d0%d%d\n", s[i].nm , s[i].yr, s[i].cls, s[i].rl ) ;
        }

        else if ( s[i].cls < 9 && s[i].rl < 9 )
        {
            printf("Roll no of student %c is %d0%d0%d\n", s[i].nm , s[i].yr, s[i].cls, s[i].rl ) ;
        }
    }   
    
    return 0 ;
}