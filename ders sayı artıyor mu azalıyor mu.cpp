#include<stdio.h>
int main()
{
	long sayi1,sayi2,sayi3;
	
	printf("Baslangic sayisini giriniz:");
	scanf("%ld",&sayi1);
	
	printf("Bir sayi giriniz (bir onceki sayiyi girerseniz durur):");
	scanf("%ld",&sayi2);
	while(sayi1!=sayi2)
	{
		if(sayi1>sayi2)
		printf("AZALIYOR\n");
		
		else if(sayi1<sayi2)
		printf("ARTIYOR\n");
		
		printf("Bir sayi giriniz (bir onceki sayiyi girerseniz durur):");
   		scanf("%ld",&sayi3);
   		
   		sayi1=sayi2;
   		sayi2=sayi3;
		
	}
	return 0;
}
