#include<stdio.h>
int main()
{
	int sayi,a,b,c;
	printf("Dort basmaklý sayiyi giriniz:\n");
		scanf("%d",&sayi);
			printf("----------------------------\n");
			b=sayi%100;
			a=(sayi-b)/100;
		    c=a+b;
	if(c*c==sayi)
		printf("Girilen sayi YARIMKARE bir sayidir");
	else
		printf("Girilen sayi YARIMKARE bir sayi degildir");
		
		return 0;

	
}
