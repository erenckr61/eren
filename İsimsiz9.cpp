#include <conio.h>
#include <stdio.h>
#include <math.h>
main()
{
	float x=2.7;
	x=floor(x);  //sayıyı bir alt tam sayıya yuvarlar
	printf("%f \n",x);
	x=ceil(2.3); //sayıyı bir üst tam sayıya yuvarlar
	printf("%f \n",x);
    int a=16;
    int b=sqrt(a); //sayının karekökünü alır
    printf("%d \n",b);
    int taban=3;
    int us=2;		
    int sonuc=pow(taban,us);//girdigin sayının girdigin üssünü alır
    printf("%d",sonuc);
    getch();
}

