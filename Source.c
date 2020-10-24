#include <stdio.h>
#include <conio.h>

void cheers(void);

int main()
{
	puts("Everyone gets free dinner!");
	cheers();
	puts("Everyone gets free dessert!");
	cheers();
	puts("Everyone pays higher taxes!\n");

	_getch();
	return(0);
}

void cheers(void)
{
	int x;

	for (x = 0; x < 3; x++)
		printf("Yes! ");
	putchar('\n');
}