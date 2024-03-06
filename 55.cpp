#include<stdio.h>
int main()
{
	int sayi1;
	int sayi2;
	float harmonik_ortalama;
	
	printf("lutfen ilk sayiyi giriniz:");
		scanf("%d",&sayi1);
			printf("lütfen ikinci sayiyi giriniz:");
				scanf("%d",&sayi2);
				
	harmonik_ortalama=(2*sayi1*sayi2)/(sayi1+sayi2);
	
		printf("\nharmonik ortalama=%.2f", harmonik_ortalama);
	
	
		return 0;		
	
	
}
