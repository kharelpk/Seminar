#include <stdio.h>

int main(void)
{
    int x = 28;
    int y = 50;

    printf("x is %i\n", x);
    printf("y is %i\n", y);

    //swapping
    int temp = x;
    x=y;
    y=temp;
    printf("x is now %i\n", x*5);
    printf("y is now %i\n", y);
    printf("done\n");
}
