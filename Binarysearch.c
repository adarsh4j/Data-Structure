#include<stdio.h>

void readnum(int [] ,int n);

int binarysearch(int [],int ,int ,int);

int  main()

{

	int n,a[100],e,index;	printf("Enter the number of elements:\n");

	scanf("%d",&n);

	readnum(a,n);

 printf("\nEnter the elements to be searched:\n");

	scanf("%d",&e);	

	index=binarysearch(a,0,n-1,e);

	if(index!=0)

	     printf("The element is present at %d",index);

	 else

      printf("The element is not present");

    return 0;	

}

void readnum(int x[],int n)

{   

    int i;

	printf("Enter the elements:\n");

	for(i=0;i<n;i++)

	  scanf("%d",&x[i]);

}

int  binarysearch(int x[],int t,int b,int k)

 {

    		int m;

    		if(t<=b)

        	{

        		m=(t+b)/2;

        		if(x[m]==k)

        		   return m+1;

        		else if(k<x[m])

        		  {

        		  return binarysearch(x,t,m-1,k);

        		  // return m;

        		  }

        		 else

        		 {

        	       return binarysearch(x,m+1,b,k);

        	      // return m;

        		 }

        	}

        	return 0;

 }

 
