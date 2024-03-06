#include<stdio.h>
int main()
{
	int sigorta,onarim, hurda,kar;
	
	printf("Hasarli aracin sigorta, onarim ve hurda bedelini giriniz:\n");
		scanf("%d%d%d",&sigorta,&onarim,&hurda);
			printf("-----------------------------\n");
	
	kar=onarim-(sigorta-hurda);	
	if((sigorta-hurda)<onarim){
	printf("Bu araci perte ayirmalisiniz\n");
		printf("Perte ayirarak %d TL kar elde edersiniz",kar);
	}
	else
	printf("Bu araci onarim icin servise gondermelisiniz");
	return 0;	
	
}
