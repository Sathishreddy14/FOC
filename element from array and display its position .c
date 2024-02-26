#include<stdio.h>
int main()
{
	int nbr,i,r,arr[30];
	printf("enter the number of elements in the array");
	scanf("%d",&nbr);
	printf("enetr the array elements:");
	for(i=0;i<nbr;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the item to bee searched:");
	scanf("%d",&r);
	i=0;
	while(i<nbr&&r!=arr[i])
	{
		i++;
	}
	if(i<nbr)
	{
		printf("the element is found in the position=%d",i+1);
	}
	else
	{
		printf("element not found!");
	}
	getch();
}
