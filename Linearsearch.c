#include<stdio.h>

int readnum(int [],int n);

int linearsearch (int [],int n,int e,int d);

//void printnum(int[],int,int);

int d=0;

int main()

{

    int n,a[100],e,index;

    printf("Enter the number of elements:\n");

    scanf("%d",&n);

    printf("\nEnter the elements:\n");

    readnum(a,n);

    printf("\nEnter the elements to be searched:\n");

	 scanf("%d",&e);		 index= linearsearch(a,n,e,d);

   if(index==0)

   {

   	printf("The element is not present");

   }

   else

   {

   printf("The element is present in the index %d",index);    

   }

  return 0;

  

}

int readnum(int x[],int n)

{

	 int i;

	 for(i=0;i<n;i++)

	   scanf("%d",&x[i]);

	 return 0;

	

}

int linearsearch(int x[],int n,int k,int d)

{

	      

	 	if(x[d]==k)

	 	{    

	 	  // index=i;

	 		return(d+1);

	 	}

	 	else

	 	{

	 	    d++;

	 		return linearsearch(x,n,k,d); 

	     }		

	return 0;

}
