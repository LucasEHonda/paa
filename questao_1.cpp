#include <stdio.h>

int main(){


	int n;
	
	scanf("%d", &n);
	
	int q_vend [n];
	float preco[n], soma = 0;
	
	
	for(int i = 0; i<n;i++){
		scanf("%f", &preco[i]);		
	}
	for(int i = 0; i<n;i++){
		scanf("%d", &q_vend[i]);		
	}
	
	
	
	
	for(int i = 0; i<n;i++){
		soma = soma + (q_vend[i] * preco[i]);
	}

	for(int i = 0; i=n;i--){
		printf("%.2f", soma);
		scanf("%d", &n);		
	}

	return 0;

}
