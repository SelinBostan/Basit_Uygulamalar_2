#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{
	int a,b;
	float hipotenus;
	printf("Ucgenin kisa kenar uzunluklarini giriniz\n");
	scanf("%d%d",&a,&b);
		printf("----------------------------------\n");

	
	//float hipotenus=pow((a*a+b*b),0.5);
    hipotenus=sqrt(a*a+b*b);

	
	//printf("Hipotenus uzunluðu:%.1f",hipotenus);
	
	/*if((a+b)>hipotenus)
		printf("Hipotenus uzunluðu:%.1f",hipotenus);*/
		
		printf("Hipotenus uzunluðu:%.1f",hipotenus);
	
	
	
	
	
	
	
	return 0;
}
