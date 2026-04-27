#include <stdio.h>

int main() {
	int n[5];
    int i;
    
	for (i = 0; i < 5; i++) {
		printf("digite o numero %i: ", i + 1);
		scanf("%i", &n[i]);
	}
	
	for (int i = 0; i < 5; i++) {
	    printf("\n numero %i = %i", i +1, n[i]);
	    
	}
	
}