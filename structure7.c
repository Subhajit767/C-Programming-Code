#include<stdio.h>
struct Rectangle
{
    int length;
    int breadth;
};
int main()
{
    struct Rectangle r={10,5};
    r.length = 20;
    r.breadth = 10;
    printf ("Area of Rectangle: %d", r.length * r.breadth);
    return 0;
}
