#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void *my_memcpy(void *memTo, const void *memFrom, size_t size)
{
	if(memTo == NULL || memFrom == NULL)
		return NULL;
	char* memToCpy=(char*)memTo;
	char* memFromCpy=(char*)memFrom;
	while(size--)
		*memToCpy++ = *memFromCpy++;
	return memTo;
}


