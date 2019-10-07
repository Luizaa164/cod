#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
   double A, B, C, areaTriangulo, pi, areaCirculo, areaTrapezio, areaQuadrado, areaRetangulo;
   scanf ("%lf %lf %lf", &A, &B, &C);
   pi = 3.14159;
   areaTriangulo = ((A * C)/2);
   areaCirculo = (pi * C * C);
   areaTrapezio = (((A + B) * C)/2);
   areaQuadrado = (B * B);
   areaRetangulo = (A * B);
  printf ("TRIANGULO: %.3lf\n", areaTriangulo);
  printf ("CIRCULO: %.3lf\n", areaCirculo);
  printf ("TRAPEZIO: %.3lf\n", areaTrapezio);
  printf ("QUADRADO: %.3lf\n", areaQuadrado);
  printf ("RETANGULO: %.3lf\n", areaRetangulo);
   return 0;
}
