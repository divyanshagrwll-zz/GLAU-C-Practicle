#include <stdio.h>
int main()
{
    int a[5], b[5], s1=0, s2=0;
    int* R = a;
    int* S = b;

    printf("Enter Subject Score of Ria And Sia");

    for(int i=0;i<5;i++)
    {
        scanf("%d%d\n",&R,&S);
        R++,S++;
    }
    R = a , S = b;
    for(int i=0;i<5;i++)
    {
        s1 = s1 + *R;
        s2 = s2 + *S;
        if(*R>*S)
    }
    print("Ria Scored more in %d subject", i+1);
    {
        elseif (*S>*R)
    }
    printf("Sia scored more in %d Subject", i+1);
    {
        else
        {printf("Its a tie in %d Subject", i+1);}
    }
    printf("The average score of Ria %d", s1/5);
    printf("The average score of Sia %d", s2/5);
    return 0;
}