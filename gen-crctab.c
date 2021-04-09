#include <stdio.h>
#include <stdint.h>
#include "bookwin.h"

int
main()
{
	int i,j;
	u32 n;

	puts("#include <stdint.h>");
	puts("uint32_t crc32_tab[256] = {");

	for (i=0; i<256; i++) {
		n = i;
		for (j=0; j<8; j++)
			n = (n&1) ? (n>>1)^0xedb88320 : (n>>1);
		printf(" 0x%08x", n);
		if (i != 255) putchar(',');
		if (i%4 == 3) putchar('\n');
	}

	puts("};");
}
