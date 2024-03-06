#include<stdio.h>

int mod(int []);

int main()
{
	int dizi[7]={3,12,1,12,7,7,12},c;
	
	printf("Dizinin modu %d dir",mod(dizi));
	
	return 0;
}

int mod(int a[])
{
	int i,j,kontrol=0,ilktek,frekans[7]={0};
	int yerdegisimi=1,yedek,max;
	
	for(i=0;i<7;i++){
		for(j=0;j<7;j++){
			if(a[i]==a[j]){ 
				frekans[i]+=1;	
			}
		}
	}
	
	max=frekans[0];
	for(i=0;i<7;i++){
		if(frekans[i]>max)
		max=a[i];
	}
	
	return max;
}
