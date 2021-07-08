#include <stdio.h>
#include <math.h>
int main() {
  float a,b,c,d,e,f,k;
  printf("Ingresa el valor del coeficiente de A:");
  scanf("%f",&a);
  printf("Ingresa el valor del coeficiente de B:");
  scanf("%f",&b);
  printf("Ingresa el valor del coeficiente de C:");
  scanf("%f",&c);
  printf("Ingresa el valor del coeficiente de D:");
  scanf("%f",&d);
  printf("Ingresa el valor del coeficiente de E:");
  scanf("%f",&e);
  printf("Ingresa el valor del coeficiente de F:");
  scanf("%f",&f);

  printf("\n La ecuacion de segundo grado es :");
  printf("\n %.fx^2 + %.fxy + %.fy^2 + %.fx + %.fy + %.fd = 0",a,b,c,d,e,f);

  k = pow (b,2) - 4 * c * c;
  printf("\n El valor del discriminate es: \n k=%.f",k);

  if (k <= 0){
    printf("\n La seccion canonica pertenece a una elipse o un circulo");
  } else if(k == 0){
    printf("\n La seccion canonica pertenece a una parabola");
  } else if(k >= 0){
    printf("\n La seccion canonica pertenece a una hiperbola");
  } else{
    printf("\n Es posible que se necesiten otros calculos");
  }
   return 0;
}
