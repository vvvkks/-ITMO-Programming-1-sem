#include<stdio.h>
#include<math.h>
int main(void)
{
    int a;
    float z1,z2;
    scanf("%d", &a);
    z1 = 2*(pow(sin(3*M_PI-2*a), 2))*(pow(cos(5*M_PI+2*a), 2));
    z2 = 1/4 - 1/4*sin((5/2)*M_PI - 8*a);
    printf("z1: %f\n",z1);
    printf("z2: %f",z2);
    return 0;
}
