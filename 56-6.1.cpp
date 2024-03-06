#include<stdio.h>
int main()
{
	int yukseklik;
	int yaricap,cap;
	float hacim;
	
	printf("yukseklik giriniz:");
		scanf("%d", &yukseklik);
	printf("\ncapi giriniz:");
		scanf("%d", &cap);
		yaricap=cap/2;
	hacim=(3.1419*yukseklik*yaricap*yaricap)/3;
	
	printf("\n\nhacim=%.2f dir", hacim);
	 return 0;
}
