#include <stdio.h>
#include <math.h>
double calcula(double a, double b);

int main()
{
    double a, b;
    scanf("%lf", &a);
    scanf("%lf", &b);
    printf("%lf", calcula(a, b));
    return 0;
}
double calcula(double a, double b)
{
    double soma = (a * a) + (b * b);
    return sqrt(soma);
}