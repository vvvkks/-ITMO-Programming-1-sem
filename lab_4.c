#include <stdio.h>

int main()
{
    int a;
    printf("Numb input:\n");
    scanf("%d", &a);
    printf("Is between [64;87]: %s\n", (a >= 64 && a <= 87) ? "yes" : "no");

    int b = 0;
    b = a & (1 << 13);
    printf("Numb input:\n");
    scanf("%d", &a);
    printf(b ? "yes" : "no");
    return 0;
}
