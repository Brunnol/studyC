#include <stdio.h>
int main(){
  
  int N, H, M, S;
  //declarar dua variavei inteira
  
	scanf("%d", &N);

  //pegar as avariaveis
  
	H = N / 3600 ;
	M = N % 3600 / 60;
	S = N % 60;
	
 //pegar as avariaveis
  printf("%d:%d:%d\n", H, M, S);

    return 0;
}
