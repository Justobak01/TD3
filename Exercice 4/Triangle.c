# include <stdio.h>
# include <stdlib.h>

int main() {
	int AB = 0; 
	int AC = 0; 
	int BC = 0; 
	printf("Entrer la valeur de AB : \n"); 
	scanf_s("%d", &AB);
	printf("Entrer la valeur de AC : \n");
	scanf_s("%d", &AC);
	printf("Entrer la valeur de BC : \n");
	scanf_s("%d", &BC);
	if (AC>=0 && AB >= 0 && BC >= 00 && AB + AC < BC && AB + BC < AC && AC + BC < AB) { 
		printf("Il existe un triangle ABC\n");
	}
	else {
		printf("Il n'existe pas de triangle ABC\n");
	}
	system("pause");
	return (EXIT_SUCCESS);
}