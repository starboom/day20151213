#include <stdio.h>
#include <stdlib.h>
#define MAX_num 6
#define _GNU_SOURCE

/*
	版本 vision 1.0
*/
void _char_bubbling(char a[],int length)
{
	int i,j;
	int t;
	for(i = 0;i < length-1;i++)
	{
		for(j = 0;j < length - i -1;j++)
		{
			if(a[j+1] < a[j])
			{
				t = a[j+1];
				a[j+1] = a[j];
				a[j] = t;
			}
		}

	}
		
}
void _int_bubbling(int a[],int length)
{
	int i,j;
	int t;
	for(i = 0;i < length-1;i++)
	{
		for(j = 0;j < length - i -1;j++)
		{
			if(a[j+1] < a[j])
			{
				t = a[j+1];
				a[j+1] = a[j];
				a[j] = t;
			}
		}

	}
		
}
void sort(char *p[],int length)
{
	char a[MAX_num];
	int b[MAX_num];
	int i;
	int flag = 0;
	for(i=0;i<MAX_num;i++)
	{
		if(strcmp(p[i],"a") >= 0 && strcmp(p[i],"z") <= 0)
		{
			flag = 1;
			a[i] = p[i][0];
		}
	}
	if(1 == flag)
	{
		_char_bubbling(a,MAX_num);
		for(i=0;i<MAX_num;i++)
		{
			printf("%c\t",a[i] );
		}	
	}
}
int main(int argc, char const *argv[])
{
	int i;
	int flag = 0;
	int num[MAX_num];
	char *p[MAX_num];
	
	for(i=0;i<MAX_num;i++)
	{
		p[i] = (char*)malloc(sizeof(char*));
	}

	for(i=0;i<MAX_num;i++)
	{
		gets(p[i]);
	}

	sort(p,MAX_num);
	if(strstr("0123456789",p[0]) != NULL)
	{
		flag = 1;
	}
	if(1 == flag)
	{
		for(i=0;i<MAX_num;i++)
		{
			num[i] = atoi(p[i]);
		}
	}
	_int_bubbling(num,MAX_num);
	for(i=0;i<MAX_num;i++)
	{
		if(flag == 1)
		{
			printf("%d\t",num[i] );	
		}

	}
	for(i=0;i<MAX_num;i++)
	{
		free(p[i]);
		p[i] = NULL;
	}


	return 0;
}