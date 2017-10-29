#include <stdio.h>
#include <conio.h>
#include <locale.h>
main()
{
    setlocale(LC_ALL,"Turkish");
	int sayi1, sayi2, sayi3, sayi4, sayi5;
	
	printf("Birinci sayiyi giriniz: ");
	scanf("%d",&sayi1);
	
	printf("Ýkinci sayiyi giriniz: ");
	scanf("%d",&sayi2);
	
	printf("ücüncü sayiyi giriniz: ");
	scanf("%d",&sayi3);
	
	printf("dördüncü sayiyi giriniz: ");
	scanf("%d",&sayi4);
	
	printf("Besinci sayiyi giriniz: ");
	scanf("%d",&sayi5);
	
	if(sayi1>sayi2 && sayi1>sayi3 && sayi1>sayi4 && sayi1>sayi5)
	 printf("%d",sayi1);
	 
	 if(sayi2>sayi1 && sayi2>sayi3 && sayi2>sayi4 && sayi2>sayi5)
	 printf("%d",sayi2);
	 
	 if(sayi3>sayi1 && sayi3>sayi2 && sayi3>sayi4 && sayi3>sayi5)
	 printf("%d",sayi3);
	 
	 if(sayi4>sayi1 && sayi4>sayi2 && sayi4>sayi3 && sayi4>sayi5)
	 printf("%d",sayi4);
	 
	 if(sayi5>sayi1 && sayi5>sayi2 && sayi5>sayi3 && sayi5>sayi4)
	 printf("%d",sayi5);
	 
	 getch();
	 
	
}
