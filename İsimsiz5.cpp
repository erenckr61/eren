#include <conio.h>
#include <stdio.h>
#include <locale.h>
main(){

    setlocale(LC_ALL, "Turkish");
    int a=2, b=10, c=50;
	float f=1.05, g=25.5, h=-0.1, yuzde;
	
	printf("\n TAB kullanýlmadan yazýlan tamsayýlar  : %d %d %d", a, b, c);
	printf("\n TAB kullanýlarak yazýlan tamsayýlar   : \t%d \t%d \t%d",a, b, c);
	
	printf("\nÜç reel sayýnýn tek satýrda yazýlmasý : %f\t%f\t%f", f, g, h);
	printf("\nÜç reel sayýnýn üç satýrda yazýlmasý : \n \n\t%f\n\t%f\n\t%f", f, g, h);
	
	yuzde=(220*25)/100.0;
	printf("\n220 ün %%25 i %f dir", yuzde);
	
	printf("\n%f/%f iþleminin sonucu = %f\n", g, f, g / f);
	printf("\n program sonunda beep sesi çýkar...\a");
	
	}
	
	

