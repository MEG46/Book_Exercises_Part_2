#include <stdio.h>
#define EGER if
#define DEGILSE else
#define VE &&
#define VEYA ||
#define BASLA {
#define BITIR }
#define TAMSAYI int
#define YAZ printf
#define OKU scanf
#define ADRES &
#define KUCUK <
#define BUYUK >
#define KUCUK_ESIT <=
#define BUYUK_ESIT >=
#define MIN 1
#define MAX 100
TAMSAYI main()BASLA
	TAMSAYI sayi;
	YAZ("Please enter a number : ");
	OKU("%d",ADRES sayi);
	EGER(sayi KUCUK MIN VEYA sayi BUYUK MAX)
	BASLA
	    YAZ("%d is not between [%d,%d].\n",sayi,MIN,MAX);
	BITIR
	
	EGER(sayi BUYUK_ESIT MIN VE sayi KUCUK_ESIT MAX)
	BASLA
	    YAZ("%d is between [%d,%d].\n",sayi,MIN,MAX);
	BITIR
	return 0;	
BITIR
