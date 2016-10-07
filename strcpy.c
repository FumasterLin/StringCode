#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
char* my_strcpy(char *dest, const char *scr)
{
	if(dest==NULL || scr==NULL)
		return NULL;
	char* destCopy = dest;
	while((*dest++ = *scr++)!='\0');
	return destCopy;
	
}
void test3(char* str1)
{
	char s[6];
	if(strlen(str1) <= 6)
	{
		my_strcpy(s,str1);
	}
	printf(s);
}
void main(void)
{
	int i;
	char* a="hello";
	char *c="world";
	char b[6];//=(char*)malloc(1);
	my_strcpy(b,a);
	test3(c);
	//printf("%c  %c\n",b[3],b[2]);
//	for(i=0;i<5;i++)
	//	printf("%c \n",b[i]);
	printf(b);
}