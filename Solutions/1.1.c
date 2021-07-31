#include <stdio.h>

int main(){
    int var1 = 5, var2 = 10;
    
    printf("Original Values var1 = %d and var2 = %d\n",var1,var2);
    
    int temp;
    temp = var1;
    var1 = var2;
    var2 = temp;
    printf("Changed Values by assignment operator : var1 = %d var2 = %d\n",var1,var2);
    
    var1 = 5; var2 = 10;
    
    var1 = var1+var2;
    var2 = var1-var2;
    var1 = var1-var2;
    printf("Changed Values by arithmatic operator : var1 = %d var2 = %d\n",var1,var2);
    
    var1 = 5; var2 = 10;
    
    var1 = var1^var2;
    var2 = var1^var2;
    var1 = var1^var2;
    printf("Changed Values by bitwise operator : var1 = %d var2 = %d\n",var1,var2);
    
}