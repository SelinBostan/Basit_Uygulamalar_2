#include<stdio.h>
int toplam(int j)
{
	int toplam=0,i;
	for(i=1;i<=20;i++)
	{
		toplam+=i;
	}
	return toplam;
}
int main()
{
	int a,b;
	scanf("%d",&a);
	printf("%d",toplam(a));
	return 0;
}
