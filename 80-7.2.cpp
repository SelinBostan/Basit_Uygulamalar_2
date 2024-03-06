#include<stdio.h>
int main()
{
	float ales;
	float yabancidil;
	float mezuniyetort;
	float siralamapuani;
	
	printf("Lutfen ALES, yabancýdil ve mezuniyet ortalamasini aralarýnda boþluk býrakarak sýrasýyla girin:");
		scanf("%f%f%f", &ales, &yabancidil, &siralamapuani);
	
	siralamapuani=(ales/2)+(yabancidil/4)+(mezuniyetort/4);
	
	printf("--------------------------------------");
	printf("\n siralama puanýnýz:%f\n", siralamapuani);
	
	
	if (siralamapuani>=60)
		printf("\n Siralamaya girilebilir");

	else
	printf("\n Siralamaya girilemez");

    
    return 0;
    
    
}
