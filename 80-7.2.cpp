#include<stdio.h>
int main()
{
	float ales;
	float yabancidil;
	float mezuniyetort;
	float siralamapuani;
	
	printf("Lutfen ALES, yabanc�dil ve mezuniyet ortalamasini aralar�nda bo�luk b�rakarak s�ras�yla girin:");
		scanf("%f%f%f", &ales, &yabancidil, &siralamapuani);
	
	siralamapuani=(ales/2)+(yabancidil/4)+(mezuniyetort/4);
	
	printf("--------------------------------------");
	printf("\n siralama puan�n�z:%f\n", siralamapuani);
	
	
	if (siralamapuani>=60)
		printf("\n Siralamaya girilebilir");

	else
	printf("\n Siralamaya girilemez");

    
    return 0;
    
    
}
