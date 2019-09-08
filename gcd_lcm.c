#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n1, n2, i, gcd;
    int ch;
    while(ch!=3)
    {
    	printf("1. G.C.D\n2. L.C.M.\n3. EXIT\n");
    	printf("\nEnter the numbers\n\n");
    	while(1)
    	{
    		printf("Enter the 1st number: ");
    			scanf("%d", &n1);
    		printf("\nEnter the second number: ");
    			scanf("%d",&n2);
    			if(n1>0&&n2>0)
    				break;
    			else
    				printf("\ninvalid input.\nPls input again\n\n");
    	}
    	printf("\nENTER YOUR CHOICE\t");
    		scanf("%d",&ch);
    	switch(ch)
    	{
    		case 1:
    			for(i=1; i <= n1 && i <= n2; ++i)
	   			{
    			    if(n1%i==0 && n2%i==0)
        		    gcd = i;
    			}
    				printf("\nG.C.D of %d and %d is %d", n1, n2, gcd);
    				printf("\n\n");
    		break;
    		case 2:
    			for(i=1; i <= n1 && i <= n2; ++i)
	   			{
    			    if(n1%i==0 && n2%i==0)
        		    gcd = i;
    			}
    			printf("\nL.C.M. of %d and %d is %d", n1, n2,(n1*n2)/gcd);
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
