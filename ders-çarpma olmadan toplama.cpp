#include<stdio.h>
#include<math.h>
int main()
{
	int sayi1,sayi2,toplam,i;
	printf("iki tam sayi giriniz");
	scanf("%d %d", &sayi1,&sayi2);
	
	for(i=1;i<=abs(sayi2);i++){
		if(sayi1>0&&sayi2>0||sayi1<0&&sayi2<0)toplam+=abs(sayi1);
		else toplam+=abs(sayi1); toplam-=toplam;
}

	printf("%d",toplam);
	

 
return 0;
}
