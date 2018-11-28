#include<stdio.h>
#include<math.h>
double x;
void SumFun(int,int);
int main()
{
	int n,N;
	printf("Enter two integer value greater than 1\n");
	scanf("%d %d",&n,&N);
	if(n>1 && N>1)
	{
		printf("Enter the value of x\n");
		scanf("%lf",&x);
		SumFun(n,N);
	}
	else
		printf("Wrong input\n");
	
	return 0;
}
void SumFun(int a,int b)
{
	double sum=0.0,square=1.0,power=-1.0;
	int i;
	for(i=2;i<=a;i++)
	{
		power=-1.0;
		square=1.0;
		for(int j=1;j<=i;j++)
		{
			printf("i=%d,j=%d\n",i,j);
			square=square*x;
			power=power*-1.0;
			printf("square=%lf,power=%lf\n",square,power);
		}
		
		sum=sum+((power*square)/i);
		printf("Sum=%lf\n",sum);
	}
	printf("Sum is %lf \n",1.0+sum);
}
