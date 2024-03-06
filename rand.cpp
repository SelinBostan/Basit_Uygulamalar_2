#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{

int rastgele;
srand(time(NULL)); 
rastgele=5+rand()%25;

printf("%d",rastgele);
return 0;


}
