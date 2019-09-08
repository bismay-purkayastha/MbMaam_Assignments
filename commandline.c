#include<stdio.h>
int main(int argc,char *argv[])
{
	printf("%s",argv[0]);
	if(argc == 2)
	{	
		int n = atoi(argv[1]);
		int i = 1,f = 1;
		if(n<0)
			printf("\nnot a valid input\n");
		else if(n == 0)
			printf("\nThe factorial of %d is = %d\n",n,1);
		else
		{
			for(;i<=n;i++)
				f*=i;
			printf("\nThe factorial of %d is = %d\n",n,f);
		}
		if(n<0)
			printf("\nnot a valid input\n");
		else if(n == 1)
			printf("1 is neither prime nor composite");
		else
		{
			int count = 0;i = 1;
			for(;i<=n;i++)
			{
				if(n%i == 0)
				{	
					count++;
				}
			}
			if(count == 2)
				printf("\n%d is prime\n",n);
			else
				printf("\n%d is not prime\n",n);
		}
	}
	else
		printf("\ninvalid input\n");
}
