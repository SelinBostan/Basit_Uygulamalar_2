#include<stdio.h>
int main(){
	
	int sayi,toplam=0,birler,yuzler,onlar;
	printf("Sayiyi giriniz:");
	scanf("%d",&sayi);
	
	birler=sayi%10;
	onlar=(sayi-birler)%100/10;
	yuzler=(sayi-birler-10*onlar)/100;

	if((birler%2)==0) 
	toplam++;
	if((onlar%2)==0) 
	toplam++;
	if((yuzler%2)==0) 
	toplam++;
	
	printf("Sayida %d tane cift rakam vardir",toplam);
	return 0;
	
}
