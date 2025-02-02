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
	char str[] = "A string!\n";

	printf("position: %d\nfloat: %.2f\ndoubleNum: %lf\ncharacter: %c\nstring: %s", position, f, d, ch, str);

	printf("\n");
	printf("|||%10d|||\n", 523423);		 // right align
	printf("|||%-10d|||\n", 523423);	 // left align
	printf("|||%-10.3f|||\n", 52.32434); // left align

	printf("\n");
	return 0;
}
