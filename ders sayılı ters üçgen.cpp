#include<stdio.h>
int main()
{
	int sayi,i,j,a;
	printf("Bir kenar uzunlugunu giriniz= ");
	scanf("%d",&sayi);
	printf("\n-------------------------------\n");
		a=sayi+1;
	for(i=1;i<=sayi;i++)
	{
	
		a-=1;
		for(j=a;j>0;j--)
		printf("%d",i);
		printf("\n");
		
	}
	return 0;
}
