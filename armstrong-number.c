#include<stdio.h>
#include<math.h>
int main()
{
	int n=0, num=0, rem=0, temp=0, temp1=0, sum=0, count=0;
	printf("Enter any number:");
	scanf("%d",&num);
	temp=num;
	temp1=num;
	n=num;
	for(n=num;n>0;n=n/10)
	{
		count++;
	}
	for(temp=num;temp>0;temp=temp/10)
	{
		rem=temp%10;
		sum= sum+pow(rem,count);
	}
	if(temp1==sum)
	{
		printf("The number is armstrong.");
	}
	else
	{
		printf("The number is not armstrong.");
	}
return 0;
}