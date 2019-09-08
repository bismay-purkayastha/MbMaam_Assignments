#include<stdio.h>
#include<string.h>
int length(char *p)
{
	int c = 0;
	while(*p!='\0')
	{
		c++;
		p++;
	}
	return c;
}
void main(int argc,char* argv[])
{
	if(argc == 3)
	{
		char a[100],b[100];
		strcpy(a,argv[1]);
		strcpy(b,argv[2]);
		if(length(a)!=length(b))
			printf("\nthe strings are not identical\n");
		else
			{
				int i = 0,flag = 0;
				for(;i<length(a);i++)
				{
					if(a[i]!=b[i])
					{
						flag = 1;
						break;
					}
				}
				if(flag == 0)
					printf("\nthe strings are identical\n");
				else
					printf("\nthe strings are not identical\n");
			}
	}
	else
	printf("\ninvalid input\n");
}
