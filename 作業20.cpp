#include <stdio.h>  

#include <stdlib.h> 

struct phone 

{

   char brand[16],type[10];

   int year,price;

}; 

int main(void)

{

    int i;


	printf("                 phone手機結構體                 \n");


    struct phone p[5]={  

	"APPLE", "X", 2017, 35900, 

    "APPLE", "i8", 2017, 21500, 

    "APPLE", "i7", 2016, 15900, 

    "APPLE", "i6s", 2015, 12900, 

    "APPLE", "xr", 2018, 25900,

	};

    

    for (i=0; i<5; i++) 

    {

        printf("%s %s %4d %5d\n", p[i].brand, p[i].type, p[i].year, p[i].price);

    }

    system("pause"); 

    return 0;

}
