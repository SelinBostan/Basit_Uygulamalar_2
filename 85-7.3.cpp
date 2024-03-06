#include<stdio.h>
int main()
{
	int sayi_1, sayi_2, yedek;
	
	printf("Lutfen bir sayi giriniz:");
		scanf("%d", &sayi_1);
		
	yedek=sayi_1;
	
	while(yedek!=0){
		sayi_2*=10;
		sayi_2+=(yedek%10);
		yedek/=10;
	}
	
	if(sayi_1==sayi_2)
	printf("Sayi palindromdur");
	else
	printf("Sayi palindrom degildir");
	 
	return 0;   
}
