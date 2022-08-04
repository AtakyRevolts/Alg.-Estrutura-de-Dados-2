#include <stdio.h>

int algoritmoDemorado(int n);

int main(){
	printf("%i\n",algoritmoDemorado(5));
}

int algoritmoDemorado(int n) {
	int soma = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++){
			for (int k = 0; k < n; k++){
				for (int l = 0; l < n; l++){
					soma = i + j + k + l;
				}
			}
		}
	}
	return soma;
}
