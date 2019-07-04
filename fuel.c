#include <stdio.h>
int main(){
  
  int h, km;
  double kml = 12.0;
  double amount = 0.0;
  //declarar duas variaveis inteiras e um de ponto flutuante

  scanf("%d %d", &h, &km);

  //pegar as avariaveis
  
  amount = (h*km)/ kml ;
 //pegar as avariaveis
  printf("%0.3f", amount);

    return 0;
}