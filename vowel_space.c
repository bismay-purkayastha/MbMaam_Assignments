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
int vowel(char c)
{
	if(c == 'A'||c == 'a'||c == 'E'||c == 'e'||c == 'i'||c == 'I'||c == 'O'||c == 'o'||c == 'U'||c == 'u')
		return 1;
	else
		return 0;
}
int space(char c)
{
	if(c == ' ')
		return 1;
	else
		return 0;
}
int tab(char c)
{
	if(c == '\t')
		return 1;
	else
		return 0;
}
void main()
{
	char a[100];
	printf("Enter the sentence\t");
		gets(a);
	int l = length(a);
	int v = 0,s = 0;
	int i = 0;
	for(;i<l;i++)
	{
		if(vowel(a[i]) == 1)
			v++;
		if(space(a[i]) == 1)
			s++;
		if(tab(a[i]) == 1)
			s+=4;
	}
	printf("\nThe number of vowels = %d\n",v);
	printf("\nThe number of space = %d\n",s);
}
