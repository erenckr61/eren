#include <conio.h>
#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Turkish");
	
	int sayi2 , sayi3;
	
	printf("Birinci say�y� girin: ");
	scanf("%d",&sayi2);
	
	printf("�kinci say�y� girin: ");
	scanf("%d",&sayi3);
	
	if(sayi2>sayi3)
	   printf("birinci say� ikinci say�dan b�y�k");
	
	else if(sayi2<sayi3)
	   printf("birinci say� ikinci say�dan k���k");
	
	else
	   printf("say�2=sayi3");
	
	getch();
}
	
	
	
	
	

