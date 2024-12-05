#include<stdio.h>
int main()
{int sum;
	int a;
	int array[8]={1,2,3,4,5,6,7,};
	for (a=0;  a<7;  a++)
	{
	printf("%d sum %d\n",a,sum);

sum+=array[a];		
	}
	
	printf("%d",sum);
	
}
