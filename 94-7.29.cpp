#include<stdio.h>
int main(){
	char tip;
	scanf("%c",&tip);
	switch(tip){
		case 'd':
		case 'D':
		printf("Dikdortgenin uzun ve kisa kenar uzunluklarini girin:");
		long kisa,uzun,alan;
		scanf("%lu %lu",&uzun,&kisa);
		alan=kisa*uzun;
		printf("Alan=%lu",alan);
		
		break;
		}
		return 0;
}
