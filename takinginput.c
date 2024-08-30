#include <stdio.h>
int main()
{
    // theory ; user will give value of x and write[scanf("%d or %f",&x );] forthat
    // this & is for defining place of x in the system
    // question take input
    float x, y, z;
    printf(" take vallue of x = ");
    scanf("\n%f", &x);
    printf(" take vallue of y = ");
    scanf("\n%f", &y);
    printf(" take vallue of z = ");
    scanf("\n%f", &z);
    float additonofxyz = x + y + z;
    printf("addition of x,y,z = %f", additonofxyz);

    return 0;
}
// scanf("take values of p and q = %f%f",p,q);
// printf (" p = %f q = %d ");