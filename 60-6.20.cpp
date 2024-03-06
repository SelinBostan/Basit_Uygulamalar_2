#include<stdio.h>
int main()
{
	int ilkend,sonend,tuketimmiktari;
	float tuketimtutari,KDV,toplam;
		printf("ilk endeksi giriniz(TL):\n");
		scanf("%d",&ilkend);
			printf("Son endeksi giriniz:\n");
				scanf("%d",&sonend);
					printf("---------------------------\n");
	tuketimmiktari=sonend-ilkend;
	tuketimtutari=tuketimmiktari*0.159838;
	KDV=tuketimtutari*0.22;
	toplam=tuketimtutari+KDV;
	printf("Tuketim miktari:%d\nTuketim tutari:%.2f\nKDV(yuzde 22):%.3f\n-----------------------------\nTOPLAM:%.3f",tuketimmiktari,tuketimtutari,KDV,toplam);
		/*printf("Tuketim tutari:%.2f\n",tuketimtutari);
	printf("KDV(yuzde 22):%.3f\n",KDV);
		printf("-----------------------------\n");
			printf("TOPLAM:%.3f",toplam);*/
return 0;


				
					
}
