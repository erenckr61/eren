#include <stdio.h>
#include <conio.h>
#include <locale.h>
main()
{
	int toplama, cikarma, sayi1, sayi2, secim;
	setlocale(LC_ALL,"Turkish");
	
	printf("Birinci sayiyi giriniz: ");
	scanf("%d",&sayi1);
	
	printf("ikinci sayiyi giriniz: ");
	scanf("%d",&sayi2);
	
	printf("1.toplama \n");
	printf("2.��karma \n");
	printf("ger�ekle�ecek i�lem (1 & 2): ");
	scanf("%d",&secim);
	
	toplama=(sayi1+sayi2);
	cikarma=(sayi1-sayi2);
	
	if(secim==1)
	  printf("%d",toplama);
	  
	else if(secim==2)
	  printf("%d",cikarma);
	  
    else
      printf("yanl�� say� girildi.");
      
      getch();
      
  }
	
	
	
	 
	
	
	
	

