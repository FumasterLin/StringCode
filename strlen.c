#include <stdio.h>
#include <assert.h>
int strlen1(const char *scr)
{
	assert(scr != NULL);
	const char *p = scr;
	while(*scr++ != '\0');
	return (scr-p-1);
}

int strlen2(const char *scr)
{
	assert(scr != NULL);
	int len=0;
	while(*scr++ != '\0')
		len++;
	return len;
}
void main(void)
{
	char *a=NULL;
	printf("%d\n",strlen1(a));
	
}