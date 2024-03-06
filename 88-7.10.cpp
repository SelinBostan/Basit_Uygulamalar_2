#include<stdio.h>
int main()
{
	int sayi,a,b,c,d,e,f,g,h;
	printf("Dort basmaklý sayiyi giriniz:\n");
		scanf("%d",&sayi);
			printf("----------------------------\n");
			b=sayi%100;
			a=(sayi-b)/100;
			d=b%10*10;
			c=b-(b%10)/10;
			f=a%10*10;
			e=a-(a%10)/10;
		    g=d+c;
		    h=e+f;
	if(a*b==g*h)
		printf("Girilen sayi TERSYUZ bir sayidir");
	else
		printf("Girilen sayi TERSYUZ bir sayi degildir");
		
		return 0;

	
}
