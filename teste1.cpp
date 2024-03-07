#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	char conseito;
	printf("digita seu conceito:\n\n");
	scanf("%c", &conseito);
	
	switch (conseito){
		case 'A':
			printf(" Parabéns, passou");
		break;
		case 'B':
			printf(" Parabéns, passou");
		break;
		case 'C':
			printf(" Parabéns, passou");
		break;
		case 'D':
			printf(" Parabéns, você não passou");
		break;
		default:
			printf(" naõ entendi");
	}
	
	
	
 return 0;
}
