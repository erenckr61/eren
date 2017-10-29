#include <stdio.h>
#include <conio.h>

main()
{
	
	int adet=1,adetson=7,bosluk=1;
	
	for(int i=0; i<4; i++)
	{
		
		for(int a=0; a<bosluk; a++)
			printf(" ");
			
		for(int b=adet; b<=adetson; b++)
			printf("%d",b);
		
	printf("\n");
	bosluk++;
	adet++;
	adetson--;
		
	}
	
	adet=7,adetson=1,bosluk=1;
	
	for(int i=0; i<4; i++)
	{
		
		for(int a=0 ; a<bosluk; a++)
			printf(" ");
			
		for(int b=adet; b>=adetson; b--)
			printf("%d",b);
			
	printf("\n");
	bosluk++;
	adet--;
	adetson++;
		
	}
	
	
	
}

