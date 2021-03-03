#include <stdio.h>

int main(){

	int n, s, inf, aux;
	
	scanf("%d %d", &n, &s);
	
	int matrix[n][s];
	
	for(int i = 0; i<n;i++){
		for(int j = 0; j<s;j++){
			scanf("%d", &matrix[i][j]);
		}
	}

	scanf("%d", &inf);
	
	for(int i = 0; i<n;i++){
		for(int j = 0; j<s;j++){
			if(inf == matrix[i][j]){
			    aux = j;
			}
		}
	}
	
    for(int i = 0; i<n;i++){
        printf("%d\n", matrix[i][aux]);
    }
	
	return 0;

}
