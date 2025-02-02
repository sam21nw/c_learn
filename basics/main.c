#include <stdio.h>
#include <string.h>

// %[flags][width][.precision]specifier

int main()
{
	int position = 2;
	float f = 4.73423;
	double d = 123.32423523453;
	int x, y, z;
	char ch = 'Y';

	printf("position: %d, float: %.2f, doubleNum: %lf, character: %c\n", position, f, d, ch);

	return 0;
}
