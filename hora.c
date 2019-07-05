#iclude <stdio.h>
int main(){

  int N, H, M, S;
  
  scanf("%d", &N);
  
  H = N / 3600;
  M = N / 60;
  S = N / 6;
  
  printf("%d:%d:%d", H, M, S);
  
  return 0;
}
