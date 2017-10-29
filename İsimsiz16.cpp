#include <stdio.h>
#include <conio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Turkish");
	
	int sayi1,sayi2,toplama,cikarma,carpma,bolme,secim;
	printf("Birinci sayi girin: ");
	scanf("%d",&sayi1);
	printf("Ýkinci sayi girin: ");
	scanf("%d",&sayi2);
	
	toplama=(sayi1+sayi2);
	cikarma=(sayi1-sayi2);
	carpma=(sayi1*sayi2);
	bolme=(sayi1/sayi2);
	
	printf("*** Menu ***\n[1] Toplama\n[2] Çýkarma\n[3] Çarpma\n[4] Bölme\n");
	printf("seçiminizi yapýnýz: ");
	scanf("%d",&secim);
	
	switch(secim)
	{
		case 1:
			printf("Toplam = %d",toplama);
			break;
		case 2:
			printf("Çýkarma = %d",cikarma);
			break;
		case 3:
			printf("Çarpma = %d",carpma);
			break;
		case 4:
			printf("Bölme = %d",bolme);
			break;
			
	}
	
	getch();

	
	
	
	
	
}
