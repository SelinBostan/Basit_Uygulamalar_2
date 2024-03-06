#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	printf("Ucgenin kenar uzunluklarini giriniz:");
	scanf("%d%d%d",&a,&b,&c);
	printf("---------------------------------\n");
	if(a<0||b<0||c<0)
	printf("Lutfen negatif sayi girmeyin");		
	else if((a+b)>c&&(b+c)>a&&(a+c)>b)
	{printf("Bu sayilar ucgen olusturabilir\n");
	if(a==b&&a!=c)
	printf("Ucgeniniz ikizkenardir");
	else if(a!=b&&a!=b&&a!=c)
	printf("Ucgeniniz cesitkenardir");
	else if(a==b&&a==c)
	printf("Ucgeniniz eskanardir");}
	else 
	printf("Bu sayilar ucgen olusturamaz\n");



	

		
		
		return 0;

		
	
}
