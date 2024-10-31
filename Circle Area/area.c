#include <math.h>
#include <stdbool.h>
#include <stdio.h>

double area(float radius, bool pi) {
  return (pi) ? pow(radius, 2) : M_PI * pow(radius, 2);
}

int main() {

  double r;

  printf("Enter the radius of your circle: \n");
  scanf("%lf", &r);

  printf("\nThe area of a circle with radius %.3lf is %.3lf or %.0lfπ", r,
         area(r, 0), area(r, 1));

  return 0;
}
