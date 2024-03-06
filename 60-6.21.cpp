#include<stdio.h>
int main()
{
	int saat,dk,sn,sure;
	printf("zamani giriniz(saat,dakika,saniye):\n");
		scanf("%d%d%d",&saat,&dk,&sn);
			printf("----------------------------\n");
	sure=saat*3600+dk*60+sn;
	printf("Bu sure:%d saniye eder",sure);
	return 0;
}
