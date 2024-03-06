#include<stdio.h>
int main()
{
	int trafikys;
	int motorys;
	int ilkyardimys;
	float trafikp;
	float motorp;
	float  ilkyardimp;
	
	printf("Trafik yanlis sayisini giriniz:\n");
	printf("Motor yanlis sayisini giriniz:\n");
	printf("Ýlkyardim yanlis sayisini giriniz:\n");
	printf("--------------------------------\n");
	
	trafikp=100-2*trafikys;
	motorp=(200-5*motorp)/2;
	ilkyardimp=(300-10*ilkyardimys)/3;
	
	printf("Trafik puaniniz:%f\n", trafikp);
	printf("Motor puaniniz%f:\n", motorp);
	printf("Ýlkyardim puaniniz%f:\n", ilkyardimp);
	
	if(trafikp>=70)
	if(motorp>=70)
	if(ilkyardimp>=70)
	printf("Tebrikler direksiyon sinavina katilabilirsiniz");
	else
	printf("Uzgunuz direksiyon sinavina katilamazsiniz");
	
	return 0;
	
	
	
	
}
