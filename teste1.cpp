#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	char conseito;
	printf("digita seu conceito:\n\n");
	scanf("%c", &conseito);
	
	switch (conseito){
		case 'A':
			printf(" Parab�ns, passou");
		break;
		case 'B':
			printf(" Parab�ns, passou");
		break;
		case 'C':
			printf(" Parab�ns, passou");
		break;
		case 'D':
			printf(" Parab�ns, voc� n�o passou");
		break;
		default:
			printf(" na� entendi");
	}
	
	
	
 return 0;
}
