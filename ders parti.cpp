#include<stdio.h>
int main()
{
	int parti[6],k,l,i,j,yedek,a;
	for(i=0;i<6;i++)
	{
		a=i+1;
		printf("\n%d nolu partinin oy sayisini veriniz:",a);
		scanf("%d",&parti[i]);
	}
	for(j=1;j<6;j++)
	{
		for(k=1;k<6;k++)
		{
			if(parti[k]>parti[k+1])
			{
				yedek=parti[k];
				parti[k]=parti[k+1];
				parti[k+1]=yedek;
			}
		}
	}
	printf("SIRALI OLARAK OY DAGILIMI\n");
	printf("partinin adi     oy sayisi\n");
	for(l=1;l<=6;l++)
	printf("%d nolu parti:    %d",l,parti[l-1]);
	return 0;
}
