#include<stdio.h>
int main()
{
	float cap;
	float hacim;
	float ycap;
	
	printf("cap degerini giriniz:");
		scanf("%f", &cap);
	
	ycap=cap/2.0;
	hacim=(4*3.1419*ycap*ycap*ycap)/3;
	
	printf("hacim=%.2f dir", hacim);
	 return 0;
}
	 
