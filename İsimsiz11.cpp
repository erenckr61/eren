#include <conio.h>
#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Turkish");
	
	int sayi1;
	
	printf("Birinci sayýyý giriniz: ");
	scanf("%d",&sayi1);
	
	if(sayi1%4==0)
		printf("Sayiniz çifttir");
	else
		printf("Sayiniz tektir");
		
getch();
	
}
	
	
