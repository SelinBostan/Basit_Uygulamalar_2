#include<stdio.h>
int main()
{
	signed char cinsiyet;
	float anneboy;
	float bababoy;
	float kizhedefboy;
	float erkekhedefboy;
	
	printf("cocugun cinsiyetini giriniz(e,E.k,K)\n");
	printf("annesinin boyunu giriniz(m)\n");
	printf("babasinin boyunu giriniz(m)\n");
	
	scanf("%s", &cinsiyet);
	scanf("%f", &anneboy);
	scanf("%f", &bababoy);
	
	switch(cinsiyet){
		case 'kiz':
			kizhedefboy=(anneboy+bababoy-0.13)/2
		    printf("hedef boy:%f",kizhedefoy);
		    if(kizhedefboy<1.63)
		    	printf("Turkiye ortalamasindan kýsa olacak");
		    else if(1.63<=kizhedefboy<=1.64)
		    	printf("Turkiye ortalamasinda olacak");
		    else if(1.64<kizhedefboy)
			printf("Turkiye ortalamasindan uzun olacak");
			
			break;
		
		case 'erkek':
			erkekhedefboy=(anneboy+bababoy+0.13)2
			printf("hedefboy:%f",erkekhedefboy);
			 if(erkekhedefboy<1.75)
		    	printf("Turkiye ortalamasindan kýsa olacak");
		    else if(1.75<=erkekhedefboy<=1.76)
		    	printf("Turkiye ortalamasinda olacak");
		    else if(1.76<erkekhedefboy)
			printf("Turkiye ortalamasindan uzun olacak");
			
			}
			
			return 0;
	
	
	
}
