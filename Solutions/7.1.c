#include <stdio.h>

int pow_self(int x,int n){
    int mul=1;
    while(n){
        mul*=x;
        n--;
    }
    return mul;
};

int main(){
    int m,n;
    printf("Enter base and power : ");
    scanf("%d %d",&m,&n);
    printf("The result is : %d",pow_self(m,n));
    return 0;
}