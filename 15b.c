#include<stdio.h>
int length(char *p)
{
	int count = 0;
	while(*p!='\0')
	{
		count++;
		p++;
	}
	return count;
}
char alphabet(char c)
{
	if(c>='a'&&c<='z')
		return c-32;
}
void main()
{
	char a[100],b[100];
	printf("Enter the sentence\t");
	gets(a);
	b[0] = ' ';
	int i = 0,k = 1;
	int l = length(a);	
	for(;i<l;i++)
	b[k++] = a[i];
	i = 0;
	printf("\nAfter converting:\t");
	for(;i<k;i++)
	{
		if(b[i] == ' '||b[i] == '\t')
		{
			printf(" %c",alphabet(b[i+1]));
			i++;
		}
		else
			printf("%c",b[i]);
		
	}
}
