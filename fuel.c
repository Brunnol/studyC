#include <stdio.h>
int main(){
  
  double h, km, amount;
  //declarar duas variaveis inteiras e um de ponto flutuante

  scanf("%lf %lf", &h, &km);

  //pegar as avariaveis
  
  amount = (h*km)/ 12 ;
 //pegar as avariaveis
  printf("%.3f\n", amount);

    return 0;
}
