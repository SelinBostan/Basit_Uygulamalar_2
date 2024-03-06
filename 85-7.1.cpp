#include<stdio.h>
int main()
{
	int vize;
	int final;
	int devampuani;
	float ortpuan;
	
	printf("Lutfen vize, final ve devam puanlarýný aralarýnda boþluk býrakarak sýrasýyla girin:");
		scanf("%d%d%d", &vize, &final, &devampuani);
	
	ortpuan=vize*4/10+final*5/10+devampuani/10;
	
	printf("\n Ortalama puanýnýz:%.2f\n", ortpuan);
	printf("------------------------------");
	
	if (ortpuan>=60)
		printf("\n Tebrikler geçtiniz");

	else
	printf("\n Kaldiniz");

    
    return 0;
    
    
}
