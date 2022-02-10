#include<stdio.h>

void insertionsort(int [],int n);

void printnum(int [],int n);

 int main()

{

	int a[12],n,i,key;
  printf("Enter the number of element:\n");

	  scanf("%d",&n);

	printf("Enter the element:\n");

	for(i=0;i<n;i++)	

  	scanf("%d",&a[i]);	

	insertionsort(a,n);

	printnum(a,n);

	return 0;

}

void insertionsort(int x[],int n)

{

	int i,j,key;

	for(i=1;i<n;i++)

	{

		key= x[i];

		for(j=i-1;j>=0&&x[j]>key;j--)

		{

		      	

	       	x[j+1]=x[j];

		}

	    x[j+1]=key;

	}

}

void printnum(int x[] , int n)

{ 

    int i;

	printf("The elements in sorted array is ");

	for(i=0;i<n;i++)

	   printf("%d ",x[i]);

}

	

	
