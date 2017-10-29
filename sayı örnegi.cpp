#include <stdio.h>
#include <conio.h>

main()
{
	
	int adet=7,adet2=3,bosluk=3;

	for(int i=0; i<=5; i++)
	{
		
		for(int a=adet; a>=1; a--)
			printf("%d",a);
			
		for(int b=0; b<bosluk; b++)
			printf(" ");
		
		for(int b=adet2; b<=9; b++)
			printf("%d",b);
		
		printf("\n");
		adet--;
		bosluk+=2;
		adet2++;
		
	}
	
	getch();
}
