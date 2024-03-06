#include<stdio.h>
int carpimm(int p1,int p3)
{
	int carpim=1,i,p4,p2=0;
	p4=p3-p2+1;
	for(i=1;i<=p4;i++)
	{
		p2=4*p1-4;
		carpim*=p2;
		p1++;
		return carpim;
	}
}
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d",carpimm(a,b));
	return 0;
}
