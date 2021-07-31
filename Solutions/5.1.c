#include <stdio.h>

int main()
{
    int r,c;
    printf("Enter Row and Column : ");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        printf("Enter data in Row %d.\n",i+1);
        for(int q=0;q<c;q++){
            scanf("%d",&arr[i][q]);
        }
    }
    printf("Row Wise Sum...\n");
    for(int i=0;i<r;i++){
        int sum=0;
        for(int q=0;q<c;q++){
            sum+=arr[i][q];
        }
        printf("Sum of Row %d is %d.\n",i+1,sum);
    }
    printf("Column Wise Sum...\n");
    for(int i=0;i<c;i++){
        int sum=0;
        for(int q=0;q<r;q++){
            sum+=arr[q][i];
        }
        printf("Sum of Column %d is %d.\n",i+1,sum);
    }
    return 0;
}