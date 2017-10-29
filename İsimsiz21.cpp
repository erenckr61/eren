#include <stdio.h>
#include <conio.h>

main()
{
	int son=5,bosluk=1;
	for (int i=son; i>=1;i--)
	{
		for(int j=0;j<bosluk;j++)
		{
			printf(" ");
		}
		for(int a=1;a<=son;a++)
		{
			printf("%d",a);
		}
		bosluk++;
		son--;
		printf("\n");

    }
    bosluk=5;
    int bas=5;
    for(int b=0;b<5;b++)
    {
    	for(int s=0; s<bosluk;s++)
	{
		printf(" ");
		
	}
	for(int f=bas;f<=5;f++)
	{
		printf("%d",f);
		
	}
	bosluk--;
	bas++;
	printf("\n");
}
getch();
}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	
	
