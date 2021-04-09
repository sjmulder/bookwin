#include <stddef.h>
#include <stdint.h>
#include "bookwin.h"

u32
crc32(u8 *p, size_t len)
{
	size_t i;
	u32 crc = (u32)-1;

	for (i=0; i<len; i++)
		crc = crc32_tab[(u8)crc^p[i]] ^ (crc>>8);

	return crc;
}
