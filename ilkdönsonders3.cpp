#include<stdio.h>
#include<math.h>
double formul(double r,double k,double l,double w)
{
	double sonuc;
	sonuc=sqrt((r*r)-(l*l)+((l+k)*(l+k))
	u-(w*w));
	return sonuc;
}
int main()
{
	double r,l,k,w;
	scanf("%lf %lf %lf %lf",&r,&l,&k,&w);
	printf("%lf",formul(r,l,k,w));
}
