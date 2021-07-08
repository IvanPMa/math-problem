#include <stdio.h>
#include <math.h>
int main() {
  int a,b,c,d,e,f,k;
  float radio, excen, aux;
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

  k = pow (b,2) - 4 * c * c;
  printf("\n El valor del discriminate es: \n k=%d",k);

  if (k <= 0){

    //printf("\n La seccion conica pertenece a una elipse o un circulo");
    //Punto 1.
    //Primer evaluacion 
    if(a == 1 && c == 1 && b == 0){
      aux = pow(d,2) + pow(e,2) - (4+f);
      radio = ( sqrt(aux)) /2;
      printf("\n La cónica es una circunferencia ");
      printf("\n Su radio es:  %.2f",radio);
    } else {
      printf("La cónica pertenece a una elipse");
    }
  } else if(k == 0){
    printf("\n La seccion canonica pertenece a una parabola");
  } else if(k >= 0){
    printf("\n La seccion canonica pertenece a una hiperbola");
  } else{
    printf("\n Es posible que se necesiten otros calculos");
  }
  
   return 0;
}
