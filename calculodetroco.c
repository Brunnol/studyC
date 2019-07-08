#include <stdio.h>
int main(){
	//definir variaveis
	double N;
	float notacem, notacinqu, notavinte, notadez, notacinc, notadois, moedareal, moedacinqu, moedavintecinc, moedadez, moedacinc, moedaum;
	//pegar o valor que o usuario vai digitar
	scanf("%lf", &N);
	//calculo usado para retirar o valor de ponto flutuante.
	int I = N;
	int M = (N-I)*100;
	//calculo matematico para notas.
	notacem = I / 100;
	notacinqu = I % 100 / 50;
	notavinte =  I % 100 % 50 / 20;
	notadez = I % 100 % 50 % 20 / 10;
	notacinc = I  % 100 % 50 % 20 % 10 / 5;
	notadois = I % 100 % 50 % 20 % 10 % 5 / 2;
	// calculo matematico para moedas
	moedareal = I % 100 % 50 % 20 % 10 % 5 % 2 / 1;
	moedacinqu = M % 100 / 50;
	moedavintecinc = M % 100 % 50 / 25;
	moedadez = M % 100 % 50 % 25 / 10;
	moedacinc = M % 100 % 50 % 25 % 10 / 5;
	moedaum = M % 100 % 50 % 25 % 10 % 5 ;
	//mostrar os resultados
	printf("NOTAS:\n%.0f nota(s) de R$ 100.00 \n%.0f nota(s) de R$ 50.00\n%.0f nota(s) de R$ 20.00\n%.0f nota(s) de R$ 10.00\n%.0f nota(s) de R$ 5.00 \n%.0f nota(s) de R$ 2.00\nMOEDAS:\n%.0f moeda(s) de R$ 1.00 \n%.0f moeda(s) de R$ 0.50 \n%.0f moeda(s) de R$ 0.25 \n%.0f moeda(s) de R$ 0.10\n%.0f moeda(s) de R$ 0.05 \n%.0f moeda(s) de R$ 0.01 \n", notacem, notacinqu, notavinte, notadez, notacinc, notadois,moedareal, moedacinqu, moedavintecinc, moedadez, moedacinc, moedaum);
	return 0;
}
