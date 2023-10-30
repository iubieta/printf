#include <stdio.h>
#include "printf.h"

int main()
{
	char			c = ' ';
	char			*str = "";
	void			*ptr = 123456789012;
	int				dec = 0;
	int				i = 0;
	unsigned long	u = 0;
	unsigned long	x = 123456789012;
	unsigned long	X = 123456789012;

	printf("ORIGINAL:\n   char: %c\n   str: %s\n   ptr: %p\n",c,str,ptr);
	printf("   dec: %d\n   int: %i\n   unsigned: %u\n   hex: %x\n   HEX: %X\n   %%\n",dec,i,u,x,X);
	ft_printf("NUEVA:\n   char: %c\n   str: %s\n   ptr: %p\n",c,str,ptr);
	ft_printf("   dec: %d\n   int: %i\n   unsigned: %u\n   hex: %x\n   HEX: %X\n   %%\n",dec,i,u,x,X);
}
