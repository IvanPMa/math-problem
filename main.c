#include <stdio.h>
#include <math.h>
int main() {
  int a,b,c,d,e,f,k;
  float radio, excen, aux1,aux2;
  printf("Ingresa el valor del coeficiente de A: ");
  scanf("%d",&a);
  printf("Ingresa el valor del coeficiente de B: ");
  scanf("%d",&b);
  printf("Ingresa el valor del coeficiente de C: ");
  scanf("%d",&c);
  printf("Ingresa el valor del coeficiente de D: ");
  scanf("%d",&d);
  printf("Ingresa el valor del coeficiente de E: ");
  scanf("%d",&e);
  printf("Ingresa el valor del coeficiente de F: ");
  scanf("%d",&f);

  printf("\n La ecuacion de segundo grado es :");
  printf("\n %dx^2 + %dxy + %dy^2 + %dx + %dy + %d = 0",a,b,c,d,e,f);

  k = pow (b,2) - 4 * a * c;
  printf("\n El valor del discriminante es: \n k=%d",k);

  //Calculamos el radio
  aux1 = pow(d,2) + pow(e,2) - (4 * f);
  radio = ( sqrt(aux1)) /2;
  //Calculamos su excentricidad
  aux2 = 1 - (a/c);
  excen = sqrt(aux2);

  if (k <= 0){

    //printf("\n La seccion conica pertenece a una elipse o un circulo");
    //Punto 1.
    //Primer evaluacion A=C=1 y B= 0
    if(a == 1 && c == 1 && b == 0){
      
      printf("\n La cónica es una circunferencia ");
      if(isnan(radio) )
        printf("\n Su radio(imaginario) es raiz de %.2f",aux1);
      else
        printf("\n Su radio es:  %.2f",radio);
      printf("\n Su excentricidad es:  %.2f",excen);

    // Cuando 0 < e < 1 elipse
    } else if(excen > 0 && excen < 1 ){
      printf("\n La cónica pertenece a una elipse");
      int absoluteA,absoluteC;
      //Sacamos los valores absolutos de a y c para ver que tipo de elipse es
      absoluteA = sqrt(pow(a,2));
      absoluteC = sqrt(pow(c,2));
      //Hacemos la comparacion
      if(absoluteA < absoluteC)
        printf("\n Elipse horizontal");
      else if(absoluteC < absoluteA)
        printf("\n Elipse vertical");
    }
  } else if(k == 0 || (a == 0 && b != 0) || (a != 0 && b==0)){
    printf("\n La seccion cónica pertenece a una parabola");
    // Punto 2
    //Segunda evaluacion A=0 ó B= 0 (no ambas)
    //excentricidad
    printf("\n Su excentricidad es:  %.2f",excen);
    //Orientacion de la parabola
    if (a > 0 )
      printf("\n La parabola esta orientada hacia arriba ");
    else
      printf("\n La parabola esta orientada hacia abajo");
  } else if(k >= 0){
    printf("\n La seccion cónica pertenece a una hiperbola");
  } else{
    printf("\n Es posible que se necesiten otros calculos");
  }
  
   return 0;
}
