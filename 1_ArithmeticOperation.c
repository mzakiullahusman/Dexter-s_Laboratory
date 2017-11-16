#include <stdio.h>
#include <math.h>

int main()
{
double x1, y1, x2, y2,
a, b,
distance;

x1 = 1;
y1 = 5;
x2 = 4;
y2 = 7;

a = x2 - x1;
b = y2 - y1;

distance = sqrt( a*a + b*b );

printf( "The distance between the two points is %.3f", distance );

getchar();

return 0;
}