#include <stdio.h>
#include <conio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Turkish");
	int sayi;
	int flag=0;
	printf("Say� girin: ");
	scanf("%d",&sayi);
	for (int i=2; i<sayi; i++)
	{
		
		if(sayi%i==0)
		{
		
			flag++;
			
		}
	}
	    if(flag==0)
	    {
	    	printf("sayi asald�r ");
		}
	    else
	    {
	    	printf("say� asal degildir ");
	    	
		}
	    
	    getch();
	    
	
}

