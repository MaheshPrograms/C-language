
#include <stdio.h>

struct student
{
    int marks ;
    int rollno ;
    char div ;
};


int main()

{
    struct student s1, s2 ;

    s1.marks = 95 ;
    s1.rollno = 5 ;
    s1.div = 'a' ;
    s2.marks = 85 ;
    s2.rollno = 8 ;
    s2.div = 'c' ;

    printf("Details of student s1 are as follows\n") ;
    printf("Div of student s1 is %c\n", s1.div ) ;
    printf("Roll no of student s1 is %d \n", s1.rollno) ;
    printf("marks of student s1 are %d\n\n", s1.marks ) ;

    printf("Details of student s2 are as follows\n") ;
    printf("Div of student s2 is %c\n", s2.div ) ;
    printf("Roll no of student s2 is %d \n", s2.rollno) ;
    printf("marks of student s2 are %d\n", s2.marks ) ;


    return 0 ;
}