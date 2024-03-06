#include<stdio.h>
int main()
{
	float KDVdahiltoptutar,KDVmiktari,KDVharicmalhizmetbedeli;
	int KDVorani;
	
	printf("KDV dahil toplam tutari giriniz(TL):\n");
		scanf("%f",&KDVdahiltoptutar);
			printf("KDV oranini giriniz(yuzde):\n");
				scanf("%d",&KDVorani);
					printf("---------------------------\n");
	
	KDVharicmalhizmetbedeli=KDVdahiltoptutar/((KDVorani/100)+1);
	KDVmiktari=KDVharicmalhizmetbedeli*KDVorani;
	
	printf("Hesaplanan KDV miktari:%.2f\n",KDVmiktari);
	printf("KDV haric mal hizmet bedeli:%.2f",KDVharicmalhizmetbedeli);
	return 0;

	
	
}
