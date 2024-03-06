#include<stdio.h>
int main()
{
	int S;
	printf("Gunun saatini giriniz(sadece saat ve 24 saatlik zaman sisteminde):\n");
		scanf("%d",&S);
			printf("-------------------------\n");
	if(S<6)
		printf("iyi uykular");
	else if(S>=6&&S<11)
		printf("Gunaydin");
	else if(S>=11&&S<17)
		printf("iyi gunler");
	else if(S>=17&&S<22)
		printf("iyi aksamlar");
	else if(S>=22&&S<24)
		printf("iyi geceler");
	return 0;
	 
		
}
