#include<stdio.h>
int main()
{
    int T[5], H[5], a=0, b=0;
    printf("Enter 5 State Vote for Hillary");
    for(int i=0; i<5 ; i++)
    {
        printf("Enter %d state vote for Trump", (i+i));
        scanf("\n%d",&T[i]);
    }
    printf("\n%d state won by", i+1);
    if(T[i]>H[i])
    {
        b+=1;
        printf("T\n");
    }
    else if (T[i]<H[i])
    {
        a+=1;
        printf("H\n");
    }
    else
    {
        printf(" Its a tie");
    }
     printf("And the winner is: ");
     if(a>b)
     {
         printf("Hillary");
     }
     else if(b>a)
     {
         printf("trump");
     }
     else
     {
         printf("\n its a tie");
     }
}