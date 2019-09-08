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
int alphabet(char c)
{
	if((c>='A'&&c<='Z')||(c>='a'&&c<='z'))
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
	int i = 0;
	printf("\nSentence after removing all characters except alphabet:\t");
	for(;i<l;i++)
	{
		if(alphabet(a[i]) == 1)
			printf("%c",a[i]);
	}
}
