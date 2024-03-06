#include<stdio.h>
int main()
{
	float s1,s2,s3,yedek;
	printf("Sayilari giriniz(3 adet):\n");
		scanf("%f%f%f", &s1,&s2,&s3);
	if(s1>s2){
		yedek=s1;
		s1=s2;
		s2=yedek;
	}
	if(s2>s3){
		yedek=s2;
		s2=s3;
		s3=yedek;
	}
	if(s1>s2){
		yedek=s1;
		s1=s2;
		s2=yedek;	
	}
	printf("Buyukten kucuge sirali hali= %f>%f>%f dir", s3,s2,s1);
	return 0;
	
}
