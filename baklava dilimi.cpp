#include<stdio.h>
int main()
{
	int satir,i,j,x;
	printf("Satir:");
	scanf("%d",&satir);
	x=2*satir-1;
	for(i=satir-1;i>=1;i--){
		for(j=1;j<=i;j++)
				printf(" ");
		for(j=i+1;j<=x-i;j++)
			printf("*");
		printf("\n");
	}
		for(i=1;i<=x;i++)
	printf("*");
		printf("\n");
			for(i=1;i<satir;i++){
		for(j=1;j<=i;j++)
			printf(" ");
		for(j=i+1;j<=x-i;j++)
			printf("*");
		printf("\n");
	}
	return 0;
}
