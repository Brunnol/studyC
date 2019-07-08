#include <stdio.h>
 
int main() {
    
    int d, m, a;
    
    scanf("%d", &d);
    
    m = d % 365 / 30;
    a = d / 365;
    d = d % 365 % 30;
    
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", a, m, d);
    return 0;
}
