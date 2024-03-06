#include<stdio.h>
int main()
{
	int sayi,a,b,c,d,e;
	printf("sayiyi giriniz:\n");
		scanf("%d",&sayi);
			a=sayi%10;
			b=(sayi%100-a)/10;
			c=(sayi%1000-a-b)/100;
			d=(sayi-a-b-c)/1000;
			e=a+b+c+d;
			
	if(sayi==e*e*e)
		printf("Girilen sayi kupunu dolduran sayidir");
	else
		printf("Girilen sayi kupunu dolduran sayi degildir");
		
		return 0;

	
}
