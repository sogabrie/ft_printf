#include "ft_printf.h"

int main()
{

//char
	int a = ft_printf("%c", 'a');
	printf("\nprint char = %d\n", a);

//string
	int a2 = ft_printf("%s","aaaaaaaaaa");
	printf("\nprint string = %d\n", a2);

// int
	int i = 123456789;
	int a3 = ft_printf("%d",i);
	printf("|\n");
	int a3_1 = printf("%d",i);
	printf("|\nprint int = %d\n", a3);
	printf("printf = %d\n",a3_1);

// un int
	unsigned int j = 5568745;
	int a4 = ft_printf("%u",j);
	printf("|\n");
	int a4_1 = printf("%u",j);
	printf("|\nprint u_int = %d\n", a4);
	printf("printf = %d\n",a4_1);

// hexs
	unsigned int b = -42949672;
	int a5 = ft_printf("%x",b);
	printf("|\n");
	int a5_1 = printf("%x",b);
	printf("|\nprint hex = %d\n",a5);
	printf("printf = %d\n",a5_1);

// point
	unsigned int c = 4545;
	int a6 = ft_printf("%p",(unsigned int)&c);
	printf("|\n");
	int a61 = printf("%p", &c);
	printf("|\nprint point = %d\n",a6);
	printf("printf = %d\n",a61);

	return (0);
}
