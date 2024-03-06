#include<stdio.h>
int main()
{
	int sure,sn,dk,saat,gun,hafta,ay,yil;
	
	printf("Lutfen sureyi saniye cinsinden giriniz:");
		scanf("%d", &sure);
		
		yil=sure/31104000;
		ay=(sure-31104000*yil)/2592000;
		hafta=(sure-31104000*yil-2592000*ay)/604800;
		gun=(sure-31104000*yil-2592000*ay-604800*hafta)/86400;
		saat=(sure-31104000*yil-2592000*ay-604800*hafta-86400*gun)/3600;
		dk=(sure-31104000*yil-2592000*ay-604800*hafta-86400*gun-3600*saat)/60;
		sn=sure-31104000*yil-2592000*ay-604800*hafta-86400*gun-3600*saat-60*dk;

		
		
	/*sn=sure%60;
	dk=sure/60;
	s=dk/60;
	gun=s/24;
	hafta=gun/7;
	ay=gun/30;
	yil=ay/12;
	
	ay2=ay-12*yil;
	hafta2=(gun-(360*yil2)-(30*ay2))/7;
	gun2=gun-(360*yil2)-(30*ay2)-(7*hafta2);
	s2=s-24*gun;
	dk2=dk-s*60;
	*/
	
//	printf("Girdiginiz sure: %d saniye, %d dakika, %d saat, %d gun, %d hafta, %d ay, %d yildir.",sn,dk,saat,gun,hafta,ay,yil);
    printf("Girdiginiz sure\n%d saniye\n%d dakika\n%d saat\n%d gun\n%d hafta\n%d ay\n%d yildir.",sn,dk,saat,gun,hafta,ay,yil);
	 return 0;
	
	
	
}
