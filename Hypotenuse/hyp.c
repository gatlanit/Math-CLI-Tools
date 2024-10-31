#include <math.h>
#include <stdio.h>

double hyp(double a, double b) { return sqrt(pow(a, 2) + pow(b, 2)); }

int main() {

  double a;
  double b;

  printf("Enter the lengths of the triangle's legs \"a b\"\n");
  scanf("%lf %lf", &a, &b);

  printf(
      "\nThe hypotenuse of a right triangle with legs %.2lf and %.2lf is %.2lf",
      a, b, hyp(a, b));

  return 0;
}
