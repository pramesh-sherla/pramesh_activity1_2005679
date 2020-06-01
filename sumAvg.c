#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number of Subjecs : ");scanf("%d",&n);
	int arr[n];
	int *ptr;
	ptr = arr;
	for(int i=0;i<n;i++)
	{
		printf("Enter marks in %d subject : ",i+1);scanf("%d",ptr+i);
	}
	int sum = 0, avg = 0;
	for(int j=0;j<n;j++)
	{
		sum = sum + *(ptr+j);
	}
	printf("Total Marks   : %d\n",sum);
	avg=sum/n;
	printf("Average marks : %d",avg);
	return 0;
}
