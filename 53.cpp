#include<stdio.h>
int main()
{
	int taban;
	int yukseklik;
	float alan;
	
	printf("lutfen s�ras�yla taban ve yukseklik degerlerini girin:");
		scanf("%d", &taban);
			scanf("%d", &yukseklik);
	
	alan = ( taban * yukseklik ) / 2.0;
	
	printf("ucgenin alan� %.2f cm2 dir/n", alan);
		
	return 0;
}
