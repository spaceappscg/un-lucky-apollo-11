/* 

 * Trabalho: Com dados fornecidos da onda de radiação de infravermelho o algoritmo emite uma mensagem
 * Participantes:
   Daniel dos Santos
   Exôdo Jaffar Melo
   João Augusto Escalante 
   João Pedro Caetano
 * Versão: Beta 1.3

*/
 


#include<stdio.h>
#include<stdlib.h>

int main(){
	double a, b, c;
	int i; 
	
	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);

	if(a == 0){
		a = b/c;
		printf("\nDistancia é %.2lf", a);	
	}
	
	if(b == 0){
		b = c*a;
		printf("\nVelocidade é %.2lf", b);
	}
	
	if(c == 0){
		c = a/b;
		printf("\nFrequência é %.2lf", c);
	}


}
