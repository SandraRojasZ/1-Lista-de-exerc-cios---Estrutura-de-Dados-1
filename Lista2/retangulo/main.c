#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "retangulo.h"

//Ponto A (xa, ya) inferior Direito   2
//Ponto B (xb, yb) superior Esquerdo  1

void main()
{
   float xb, yb, xa, ya;

   printf("Insira as coordenadas do ponto B: \n");
   printf("xb: ");
   scanf("%f", &xb);
   printf("yb: ");
   scanf("%f", &yb);

   printf("\n");

   printf("Insira as coordenadas do ponto A: \n");
   printf("xa: ");
   scanf("%f", &xa);
   printf("ya: ");
   scanf("%f", &ya);

   printf("\n");

   Ponto* pb = criaPonto(xb, yb);
   Ponto* pa = criaPonto(xa, ya);

   Retangulo* r = criaRetangulo(pb, pa);

   printf("Area do retangulo: %.1f\n", aRetangulo(r));
   printf("Perimetro do retangulo: %.1f\n", pRetangulo(r));
   printf("Comprimento da diagonal do retangulo: %.1f", cdiagonalRetangulo(r));

   liberaRetangulo(r);
   liberaPonto(pb);
   liberaPonto(pa);

   printf("\n");
   return 0;
}
