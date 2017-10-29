#include <stdio.h>
#include <conio.h>

main()
{
	int son=5,bosluk=1;
for(int i=1; i<=5; i++)
  {
  	for  (int j=0;j<bosluk; j++);
  	{
  	   printf(" ");
  	}
  	for(int b=son;b>=1;b--)
  	{
  		printf("%d",b);
	 }
	 for(int a=1;a<=son;a++)
	 {
	 	printf("%d",a);
	 }
	 
	 bosluk++;
	 son--;
	 printf("\n");
	 
	 
 }
 getch();
}
