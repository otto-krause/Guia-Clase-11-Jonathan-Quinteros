#include <stdio.h>
#include <stdlib.h>
	void pre(float fue, float su);	
	int main() {
	float su=0,fue=0;	
	printf(" Ingrese la fuerza ");
	scanf("%f",&fue);
	printf(" Ingrese la superficie ");
	scanf("%f",&su);
	pre (fue,su);
	}
	
	void pre(float fue, float su){
	float pr=0;
	pr=fue/su;
	printf("La presion es = %f ",pr);
	}
