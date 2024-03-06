#include<stdio.h>
int main()
{
	int parti[6],partino[6]={1,2,3,4,5,6},k,l,i,j,yedek,a,yedek2;
	for(i=0;i<6;i++)
	{
		a=i+1;
		printf("\n%d nolu partinin oy sayisini veriniz:",a);
		scanf("%d",&parti[i]);
	}
	for(j=1;j<6;j++)
	{
		for(k=0;k<6;k++)
		{
			if(parti[k]>parti[k+1])
			{
				yedek=parti[k];
				parti[k]=parti[k+1];
				parti[k+1]=yedek;
				yedek2=partino[k];
				partino[k]=partino[k+1];
				partino[k+1]=yedek2;
				
			}
		}
	}
	printf("\nSIRALI OLARAK OY DAGILIMI\n");
	printf("partinin adi     oy sayisi\n");
	for(l=5;l>=0;l--)
	printf("\n%d nolu parti:    %d",partino[l],parti[l]);
	return 0;
}
