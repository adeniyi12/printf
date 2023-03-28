#include "main.h"


int main(void)
{
	int n, n1;
	float f = 1.2345;
	char c = 'T';
	char *s = "Timmy";
	int i = 12345;
	int d = 54321;
	/*int b = 4321;*/
	unsigned int u = 3123456789;
	void *p = &i;


	_printf("This is CUSTOM_PRINTF\n %c %s %% %d %i %b %u %o %x %X %S %p\n", c, s, d, i, u, u, u, u, "BEST\nschool", p);
	/*printf("This is STANDARD_PRINTF\n %c %s %% %d %i %b %u %o %x %X %S %p\n", c, s, d, i, b, u, d, d, "BEST\nschool", p);*/
	_printf("My pf\n%5d %+5i %.2f\n", d, i, f);
	printf("My pf\n%5d %+5i %.2f\n", d, i, f);


	n = _printf("This is my printf project\n");
	n1 = printf("This is my printf project\n");

	printf("%d %d", n, n1);

	return (0);
}

