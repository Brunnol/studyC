#include <stdio.h>
int main()
{
    double A = 0.0;
    double n = 0.0;
    double R = 0.0;
    n = 3.14159;
    scanf("%lf", &R);

    A = n*(R*R);

    printf("A=%0.4lf\n", A);

    return 0;
}
