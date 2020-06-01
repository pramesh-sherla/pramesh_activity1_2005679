#include<stdio.h>
int main()
{
	int n;
	int i,j,k;
	printf("Enter the number of Subjecs : ");scanf("%d",&n);
	int arr[n];
	int *ptr;
	ptr = arr;
	for(i=0;i<n;i++)
	{
		printf("Enter marks in %d subject : ",i+1);scanf("%d",ptr+i);
	}
	int sum = 0, avg = 0;
	for(j=0;j<n;j++)
	{
		sum = sum + *(ptr+j);
	}
	printf("Total Marks   : %d\n",sum);
	avg=sum/n;
	printf("Average marks : %d",avg);
	int min = *ptr;
	for(k =0;k,n;k++)
	{
		if (*(ptr+k)<min) min = *(ptr+k);
	}
	printf("Min marks are : %d",min);
	return 0;
}
