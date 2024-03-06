#include<stdio.h>
int main()
{
	char kesinti,E,e,H,h;
	int primgun;
	float gio,aio,maas;//gio(günlük iþsizlik ödeneði),aio(aylýk iþsizlik ödeneði)
	printf("son uc ay kesintisiz calistiniz mi?(E,e,H,h):\n ");
		scanf("%c",&kesinti);
			printf("prim gun sayinizi giriniz:\n");
				scanf("%d",&primgun);
					printf("calisirkenki son aylik maasiniz:\n");
						scanf("%f",&maas);
							printf("--------------------------------\n");
gio=(maas/30)*4/10;
aio=gio*30;

if((kesinti==h||kesinti==H)&&primgun<600)
	printf("Maalesef issizlik maasi odenegi alamazsiniz\n");
else if(primgun>=600&&primgun<900)
	printf("issizlik odenegi alabileceginiz sure 180 gun\n");
else if(primgun>=900&&primgun<1080)
	printf("issizlik odenegi alabileceginiz sure 240 gun\n");
else if(primgun>=1080)
	printf("issizlik odenegi alabileceginiz sure 300 gun\n");
		
printf("Gunluk issizlik odenegi:%.2f\n",gio);
	printf("issizlik aylik maasiniz:%.2f",aio);

	
	return 0;






}
