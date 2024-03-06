#include<stdio.h>
int main()
{
	int kazanan,oyuncu1=0,oyuncu2=0,i=1;
	char mars;
	
		printf("%d. elin kazananini giriniz (1 ya da 2):",i);
		scanf("%d",&kazanan);
		
		printf("Mars etti mi (e/h):");
		scanf("%c",&mars);
	
	
	while(oyuncu1<5||oyuncu2<5)
	{

		
		if(kazanan==1)
		{
 		switch(mars)
		    {
        	case'e':	oyuncu1+=2;	
        	case'h':	oyuncu1+=1;
         	}  
  	    }
  	    
		else if(kazanan==2)
		{
			switch(mars)
			{
			case'e':	oyuncu2+=2;
			case'h':	oyuncu2+=1;	
		    }
		}
		printf("\n""puan durumu: %d-%d",oyuncu1,oyuncu2);
			
    	i++;
    		
		printf("\n%d. elin kazananini giriniz (1 ya da 2):",i);
		scanf("%d",&kazanan);
		
		printf("\nMars etti mi (e/h):");
		scanf("%c",&mars);
		
    }
	
		printf("\n---------------------------------------\n");
        
		if (oyuncu1>oyuncu2)
		printf("%d. EL SONUNDA\nKAZANAN: 1. OYUNCUDUR",i);
		
		else if(oyuncu1<oyuncu2)
		printf("%d. EL SONUNDA\nKAZANAN: 2. OYUNCUDUR",i);

		
		
return 0;



}
