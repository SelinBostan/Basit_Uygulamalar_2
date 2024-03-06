#include<stdio.h>
int main()
{
	int sayi;
	
	printf("Bir sayi girin:");
		scanf("%d", &sayi);
		
	if(sayi%9==0)
	printf("sayiniz dokuza tam bolunur");
	else
	printf("sayiniz dokuza tam bolunmez");
	
	return 0;
}
