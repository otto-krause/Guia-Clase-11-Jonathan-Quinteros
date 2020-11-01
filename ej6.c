#include <stdio.h>
#include <stdlib.h>
	void oct(float num);
	int main() {
	float num=0;
	printf(" Ingrese un numero ");
	scanf("%f",&num);
	oct(num);
	}
	
	void oct (float num){
		float res=0;
		res=num/8;
		printf(" La octava parte de %f es %f ",num,res);
	}
	
