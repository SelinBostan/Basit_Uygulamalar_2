#include<stdio.h>
int main()
{
	int vize;
	int final;
	int devampuani;
	float ortpuan;
	
	printf("Lutfen vize, final ve devam puanlar�n� aralar�nda bo�luk b�rakarak s�ras�yla girin:");
		scanf("%d%d%d", &vize, &final, &devampuani);
	
	ortpuan=vize*4/10+final*5/10+devampuani/10;
	
	printf("\n Ortalama puan�n�z:%.2f\n", ortpuan);
	printf("------------------------------");
	
	if (ortpuan>=60)
		printf("\n Tebrikler ge�tiniz");

	else
	printf("\n Kaldiniz");

    
    return 0;
    
    
}
