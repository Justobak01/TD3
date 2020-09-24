# include <stdio.h>
#include <stdlib.h>

int main() {
	int revenus = 0 ; 
	int Impot_Brut = 0; 
	printf(" Veuillez saisir le montant de vous revenus  en euros : \n "); 
	scanf_s("%d", &revenus); 
	if (revenus <= 9700) {
		printf("Le montant brut de vous impot est de : 0 euros ");
	}
	else if (revenus > 9700 && revenus <= 26791 ) {
		Impot_Brut = revenus * 0.14;
		printf("Le montant brut de vous impot est de : %d euros ", Impot_Brut);
	}
	else if (revenus > 26791 && revenus <= 71826) {
		Impot_Brut = revenus * 0.3;
			printf("Le montant brut de vous impot est de : %d euros ", Impot_Brut);
	}
	else if (revenus > 71826 && revenus <= 152108 ) {
		Impot_Brut = revenus *0.41;
		printf("Le montant brut de vous impot est de : %d euros ", Impot_Brut);
	}
	else if (revenus > 152108) {
		Impot_Brut = revenus * 0.45;
		printf("Le montant brut de vous impot est de : %d euros ", Impot_Brut);
	}
	system("pause"); 
	return (EXIT_SUCCESS); 

}