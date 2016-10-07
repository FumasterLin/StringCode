#include <stdio.h>
#include <stdlib.h>

int my_strcmp(const char* src,char* dest)
{
	int ret=0;
	while(*dest && !(ret=*(unsigned char*)src-*(unsigned char*)dest))
	{
		src++;
		dest++;
	}
	if(ret<0)
		ret=-1;
	else if(ret>0)
		ret=1;
	return ret;
}
void main(void)
{
	char* a="1234";
	char* b="1235";
	char* c="1234";
	printf("%d, %d, %d",my_strcmp(a,b),my_strcmp(a,c),my_strcmp(b,c));
	
}