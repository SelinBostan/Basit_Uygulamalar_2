#include<stdio.h>
int main()
{
	int eleman,a,b,i,kod[a],sayi[b],k,l,c;
	printf("Eleman sayisini giriniz");
	scanf("%d",&eleman);
	a=eleman;
	b=eleman;
	for(i=0;i<eleman;i++)
	{
		c=i+1;
		printf("\n%d. esyanin kodunu ve sayisini giriniz	:\t",c);
		scanf("%d %d",&kod[i],&sayi[i]);
	}
	printf("\n-----------------------------------------\n");
	
	for(k=0;k<eleman;k++)
	printf("Kodlar:%d",kod[k]);
	
	for(l=0;l<eleman;l++)
	printf("Kodlar:%d",sayi[l]);
	
	return 0;
	
}
