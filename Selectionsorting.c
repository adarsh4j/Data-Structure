#include<stdio.h>

void readnum(int[],int);

void sortnum(int[],int);

void swap(int *,int *);

void printnum(int[],int);

int main()

{

	int n,a[100];	
  printf("Enter the number of elements");

	scanf("%d",&n);

	readnum(a,n);

	sortnum(a,n);

	return 0;

}

void readnum(int x[],int n)

{

	int i;

	printf("Enter the elements : \n");

	for(i=0;i<n;i++)

	  {

	   scanf("%d",&x[i]);

	  }

}

void sortnum(int x[],int n)

{

	int i,j;

	for(i=0;i<n-1;i++)

	{

		int small=x[i];

		int index=i;

		for(j=i+1;j<n;j++)

		{

			if(x[j]<small)

	    	{

		   	small=x[j];

	   		index=j;

	    	}

		}swap(&x[i],&x[index]);

	}printnum(x,n);

}

void swap(int *a,int *b)

{

		int t;

		t=*a;

		*a=*b;

		*b=t;

}

void printnum(int x[],int n)

{

		int i;

		printf("The element is sorted form is : ");

		for(i=0;i<n;i++)

		{

		  printf("%d ",x[i]);

		}

}

		
