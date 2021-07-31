#include <stdio.h>
#include <math.h>

int QUAD(int a,int b,int c){
    int D;
    D = sqrt(pow(b,2)-4*a*c);
    if(D>=0){
        return 1;
    }
    else
        return 0;
};

int main(){
    
    int a,b,c;
    printf("Enter Coefficient of x^2 : ");
    scanf("%d",&a);
    printf("Enter Coefficient of x^1 : ");
    scanf("%d",&b);
    printf("Enter Coefficient of x^0 : ");
    scanf("%d",&c);
    QUAD(a,b,c)?printf("Roots are Real."):printf("Roots are Imaginary.");
}