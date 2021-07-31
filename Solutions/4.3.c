#include<stdio.h>
int main()
{
    int a;
    printf("Enter number of student");
    scanf("%d",&a);
    int b[a],c[a];
    printf("Enter the weight and Height");
    for(int i=0; i<a; i++)
    {
        scanf("%d%d",&b[i], &c[i]);
    }
    for(int i=0; i<a; i++)
    {
        if((b[i]*2.205)>=180&&(b[i]*2.205<=250))
        {
            printf("student With Height %d is  is in criteria \n", c[i]);
        }
    }
    return 0;
}