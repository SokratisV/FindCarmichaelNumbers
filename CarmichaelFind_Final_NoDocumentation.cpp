#include <stdio.h>
#include <math.h>

#define N 10000000

int isCarmichael(int);
void print_Primes(int);


main()
{
	int x,p;
	for (x=3;x<N;x=x+2)
	{
		p=isCarmichael(x);
		if (p==1)		
			print_Primes(x);
	}
		printf("\b)");
}

int isCarmichael (int p)
{
	int i,counter=0,x=p;
	for (i=3;i<=sqrt(p);i=i+2) 		
	{	
							  		 
		if (x%i==0)
		{
			x=x/i;
			if (x%i==0)
				{
					return 0;
				}
			if ((p-1)%(i-1)==0)	
				{
					counter++;
				}
			else{
					return 0;
				}
		}
	}

	if (x>1)
		if (counter>2)
		{
			
			return 0;
		}
	else 
		return 0;
		return 1;
}


void print_Primes (int p) 				//Auti kaleitai an einai sigoura Carmichael o arithmos mas
{
	int x=p,i;	
	printf("%d=   (",p);					
	for (i=3;i<=sqrt(p);i=i+2)
	{
		while (x%i==0)
		{
			printf("%dx",i);
			x=x/i;
		}
	}
	printf("\b)\n");
		
}
