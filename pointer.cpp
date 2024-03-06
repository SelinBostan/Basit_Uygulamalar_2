#include<stdio.h>
void fonk1(int);
void fonk2(int *);
int main()
{
	int degisken=3;
	fonk1(degisken);
	printf("%d\n",degisken);
	fonk2(&degisken);
	printf("%d\n",degisken);
	return 0;
}
void fonk1(int a)
{
	printf("%d\n",a);
	a=200;
	printf("%d\n",a);
}
void fonk2(int *a)
{
	printf("%d\n",*a);
	*a=500;
	printf("%d\n",*a);	
}
