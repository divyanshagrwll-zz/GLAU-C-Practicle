#include <stdio.h>

int main()
{
    int num;
    printf("Enter number of students : ");
    scanf("%d",&num);
    int arr[num][4];
    for(int i=0;i<num;i++){
        printf("Enter Roll number of student %d.\n",i+1);
        scanf("%d",&arr[i][0]);
        printf("Enter marks for Quiz1 Quiz2 Quiz3 : ");
        scanf("%d %d %d",&arr[i][1],&arr[i][2],&arr[i][3]);
    }
    printf("Data Shown...\n");
    printf("Roll no.\tHighest\t\tLowest\t\tAverage\n");
    for(int i=0;i<num;i++){
        int a = arr[i][1], b = arr[i][2], c = arr[i][3],mx,l;
        float av;
        mx = a>b?a>c?a:c:b>c?b:c;
        l = a<b?a<c?a:c:b<c?b:c;
        av = (a+b+c)/3;
        printf("%d\t\t%d\t\t%d\t\t%.2f\n",arr[i][0],mx,l,av);
    }
    return 0;
}