#include<stdio.h>

void sort(int *arr,int size);
int binary_search(int *arr,int size,int key);
int main()
{
	int s,indx,element;
	printf("Please Enter array size : ");
	scanf("%d",&s);
	int a[s];
	printf("Enter array elements \n");
	for(int i = 0;i<s;i++)
	{
		scanf("%d",&a[i]);
	}
    printf("plese enter the number you want to search for : ");
	scanf("%d",&element);
    indx = binary_search(a,s,element);
    printf("the element you are searching for have index of : %d\n",indx);
	
}
void sort(int *arr,int size)
{
    for(int i = 0 ;i<size-1;i++)
	{
		for(int j = 0;j<size-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}
int binary_search(int *arr,int size,int key)
{
    sort(arr,size); 
    int flag = 0;
	int start = 0;
	int end = size-1;
	int mid;
	while(end >= start)
	{
		mid = (start+end)/2;
		if(key == arr[mid])
		{
			flag = 1;
			break;
		}
		else if(key > arr[mid])
			start = mid + 1;
		else if(key < arr[mid])
			end = mid-1;
		else{};
	}
	if(flag == 1)
		return mid;
	else
		return	-1;
}
