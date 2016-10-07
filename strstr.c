//字符串中的子串查找
#include <stdio.h>
#include <stdlib.h>
const char* my_strstr(const char* src,const char* sub)
{
	const char* bp;
	const char* sp;
	if(src==NULL || sub==NULL)
		return NULL;
	while(*src)
	{
		bp=src;
		sp=sub;
		while(*bp==*sp)
		{
			if(*sp)
				return src;
			bp++;
			sp++;
		}
		src++;
	}
	return NULL;
}
void main(void)
{
	
	char *a="12345678";
	char *b="8";
	const char* s=my_strstr(a,b);
	printf(s);
}