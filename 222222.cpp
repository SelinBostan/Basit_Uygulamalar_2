#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main() {
	char cevap;
	int puan,puan2,puan3,puan4,puan5,puan6,toplam,B;
	printf("HANGI LOST KARAKTERISIN?\n");
	printf("(Teste baslamak icin herhangi bir harfe ve ardindan enter'a basin)\n");
	scanf("%d", &B);
	
	
	printf ("Soru 1. Mistik olaylari sever misin,onlari kurcalar misin? : \na. Evet \nb. Hayir \nc. Bazen  \nd. Asla");
	cevap = getch();
	
	switch(cevap) {
		case 'a':puan = 4; break; 	
		case 'b':puan =10; break; 	
		case 'c':puan = 1; break; 	
		case 'd':puan = 6; break; 	
	}
	
	printf ("\n\nSoru 2. Hic illegal isler yaptin mi? : \na. Evet \nb. Hayir \nc. Bilmem olabilir mi?  \nd. Bu soruyla gundeme gelmek istemiyorum");
	cevap = getch();
	
	switch(cevap) {
		case 'a':puan2 = 6; break; 	
		case 'b':puan2 = 10; break; 	
		case 'c':puan2 = 4; break; 	
		case 'd':puan2 = 1; break; 
	}
	
	printf ("\n\nSoru 3. Kendini nasil goruyorsun, sansli mi sanssiz mi? : \na. Sans benim adim \nb. Yok ya ne gezer \nc. Arada tutar  \nd. O kadar kotu sansliyim ki yanimdakiler bile etkilenir");
	cevap = getch();
	
	switch(cevap) {
		case 'a':puan3 = 10; break; 
		case 'b':puan3 = 4; break; 
		case 'c':puan3 = 6; break; 	
		case 'd':puan3 = 1; break; 
	}
	
	printf ("\n\nSoru 4. Asabi bir kisilik misin yoksa uysal ve sevecen mi? : \na. Cok asabiyim \nb. Yok canim pamuk gibiyimdir \nc. Biraz ondan biraz ondan  \nd. Hicbiri");
	cevap = getch();
	
	switch(cevap) {
		case 'a':puan4 = 6; break; 
		case 'b':puan4 = 10; break; 
		case 'c':puan4 = 4; break; 
		case 'd':puan4 = 1; break;
	}
	
	printf ("\n\nSoru 5. Cok sir saklar misin, insanlarin bilmedigi gizli yonlerin var midir? : \na. Agzimi bicak acmaz \nb. Biraz \nc. Her seyi anlatirim  \nd. Gizli yonlerimi her insana anlatmam");
	cevap = getch();
	
	switch(cevap) {
		case 'a':puan5 = 6; break; 	
		case 'b':puan5 = 4; break; 
		case 'c':puan5 = 10; break; 
		case 'd':puan5 = 1; break;
	}
	
	printf ("\n\nSoru 6. Kaderci misin Bilimci mi? : \na. Kaderci \nb. Bilimci \nc. Orta halli  \nd. Hicbiri");
	cevap = getch();
	
	switch(cevap) {
		case 'a':puan6 = 4;  break;
		case 'b':puan6 = 10;  break;	
		case 'c':puan6 = 1; break;
		case 'd':puan6 = 6; break;
	}
									
	toplam = puan+puan2+puan3+puan4+puan5+puan6;	

	switch (toplam) {
		case 52 ... 60:printf("\n\nKarakterin=========>JACK\n\nSen tam bir lidersin. En zor durumlarda bile asla karamsarliga kapilmazsin.Her seye bir cozumun vardir. Helal olsun sene be daha ne diyelim!");break; 
		case 46 ... 51:printf("\n\nKarakterin=========>SAYID\n\nElinden her is gelir, insanlar sensiz bir sey yapamaz, onlarin eli kolusun!");break;
		case 36 ... 45:printf("\n\nKarakterin=========>KATE\n\nHmm sen neler sakliyosun oyle bakalim, cok gizemli bi kisilige sahipsin, insanlar senden korksun! ");break; 
		case 29 ... 35:printf("\n\nKarakterin=========>SAWYER\n\nBiliyoruz aslinda cok duygusalsin ve yumusaksin ama uzuntulerini bastirmak icin asabi gorunmeye calisarak kendini kasiyorsun. YAPMA!");break;
		case 20 ... 28:printf("\n\nKarakterin=========>JOHN\n\nSen tam bir doga insanisin. Ilk buldugun firsatta kendini dogaya at. Ayni zamanda cok iyimser bir insansin. Insanlar yanlis anliyor ama sen hep onlarin iyiligini dusunuyorusun. Pes etme, boyle devam:) ");break; 
		case 14 ... 19:printf("\n\nKarakterin=========>SUN\n\nCok tatlis bir insansin ve sanki biraz duygusalsin ama bosver her sey guzel olacak:D");break;
		case 6 ... 13:printf("\n\nKarakterin=========>HUGO\n\nOoooo sana cok iyi haberlerimiz var yakin zamanda guzel seyler kazanacakisin ama dur hemen sevinme kazandigin sey hayra alamet olmayabilir. Dikkatli ol...");break;
	}
	
	return 0;
}
