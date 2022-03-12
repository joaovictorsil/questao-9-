#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//  qt 9

int somadiv (int n);


int main () {
	setlocale (LC_ALL, "Portuguese_Brazil");
	int num, resp;
	
	printf ("informe um valor:");
	scanf("%d", &num);
	
	resp = somadiv(num);
	
	printf("A soma dos divisores é: %d", resp);
}

int somadiv(int n){
	int divisores;
	
	for(int d = 1; d <= n; d++){
		if(n % d == 0){
			
			
			divisores = divisores + d;
		}
	}
	return divisores;
}
