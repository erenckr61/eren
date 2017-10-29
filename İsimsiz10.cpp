#include <conio.h>
#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Turkish");
	
	int sayi2 , sayi3;
	
	printf("Birinci sayýyý girin: ");
	scanf("%d",&sayi2);
	
	printf("Ýkinci sayýyý girin: ");
	scanf("%d",&sayi3);
	
	if(sayi2>sayi3)
	   printf("birinci sayý ikinci sayýdan büyük");
	
	else if(sayi2<sayi3)
	   printf("birinci sayý ikinci sayýdan küçük");
	
	else
	   printf("sayý2=sayi3");
	
	getch();
}
	
	
	
	
	

