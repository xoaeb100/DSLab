#include<stdio.h>
int split(int arr[],int lower, int upper)
{
int pivot=lower, a=lower+1 ,b=upper;
int temp;
while(b>=a)
{
	while(arr[a]<arr[pivot])
	a++;
	while(arr[b]>arr[pivot])
	b--;
}
	if(b>a)
{
	temp=arr[b];
	arr[b]=arr[pivot];
	arr[pivot]=temp;
	return b;
}}

int main()
		{
			int a[100];
			int  n,i, num,srch,mid;
			printf("enter elements of array");
			scanf("%d",&n);
			if (n<1 || n>100)
			{
				printf("enter btween 1-100");
			}
			printf("enter elements");
			for(i=0;i<n;i++)
			scanf("%d",&a[i]);
			printf("enter element to be searched");
			scanf("%d",&num);
			srch=binary_search(a,num,n);
			if(mid==-1)
			{
				printf("element not found");
				}
				else 
				printf("element found at %d , %d position",num,srch);
				}
