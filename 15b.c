#include<stdio.h>
#include<stdlib.h>
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
char caseChange(char c)
{
	if(c>='a'&&c<='z')
		return c-32;
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
	char a[100],b[100];
	int ch,l = 0;
	int i,k;
    while(ch!=3)
    {
    	printf("1. REMOVING CHARACTERS\n2. CAPATALISE EACH CHARACTER AFTER SPACE\n3. EXIT\n");
    	printf("\nEnter the sentence\n\n");
    	while(1)
    	{
    		fflush(stdin);
    		gets(a);
    		l = length(a);
    			if(l>0)
    				break;
    			else
    				printf("\ninvalid input.\nPls input again\n\n");
    	}
    	printf("\nENTER YOUR CHOICE\t");
    		scanf("%d",&ch);
    	switch(ch)
    	{
    		case 2:
    			b[0] = ' ';
				 i = 0,k = 1;
				for(;i<l;i++)
					b[k++] = a[i];
				i = 0;
				printf("\nAfter converting:\t");
				for(;i<k;i++)
				{
					if(b[i] == ' '||b[i] == '\t')
					{
						printf(" %c",caseChange(b[i+1]));
						i++;
					}
					else
						printf("%c",b[i]);
		
				}
    				printf("\n\n");
    		break;
    		case 1:
    			printf("\nSentence after removing all characters except alphabet:\t");
				for(;i<l;i++)
				{
					if(alphabet(a[i]) == 1)
						printf("%c",a[i]);
				}
				printf("\n\n");
			break;
    		case 3:
    			exit(1);
    		break;
    		default:
    			printf("Wrong choice");
		}
    }    
}
