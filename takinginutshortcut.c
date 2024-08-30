#include <stdio.h>
int main()
{
    float x,y,z ;
    printf(" give values of x,y,z in sequence after entering =\n");
    scanf("\n%f\n%f\n%f", &x,&y,&z);
    float l = x+y+z ;
    printf("addition of x , y , z is %f",l);

    return 0;
}