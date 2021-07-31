#include <stdio.h>

int main(void)
{
    int a, b, c, temp, min;

    printf ("Enter Number(use space): ");
    scanf ("%d%d%d", &a, &b, &c);

    temp = (a < b)    ? a : b;
    min =  (c < temp) ? c : temp;

    printf ("The Lowest marks is: %d", min);

    return 0;
}