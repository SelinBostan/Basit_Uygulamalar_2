#include<stdio.h>
int main()
{
	int yas;
	float kilo;
	float boy;
	float vucutkitleindeksi;
	
	printf("Yasinizi giriniz:\n");
	printf("Kilonozu giriniz(kg):\n");
	printf("Bouyunuzu giriniz:(m)\n");
	
	scanf("%d", &yas);
	scanf("%f", &kilo);
	scanf("%f", &boy);
	
	vucutkitleindeksi=kilo/(boy*boy);
	
	printf("vucut kitle indeksiniz:%f", vucutkitleindeksi);
	
	if(18.50<=vucutkitleindeksi<=24.99 && 13<=yas<=17)
	printf("Tebrikler askeri liseye girebilirsiniz");
	else
	printf("Askeri liseye giremezsiniz");
	
	return 0;

}
