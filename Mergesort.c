// About Merge sort //
#include<stdio.h>
void read(int [],int);
void mergesort(int [],int,int);
void simplemerge(int [],int,int,int);
void print(int [],int);
void main()
{
  int a[50],n;
  printf("Enter the Number of Element : \n");
  scanf("%d",&n);
  read(a,n);
  mergesort(a,0,n-1);
  print(a,n);
}
void read(int a[],int n)
{  int i;
   printf("Enter the elements : "); 
   for(i=0;i<n;i++)
      scanf("%d",&a[i]);
}
void mergesort(int a[],int beg,int end)
{
   if(beg<end)
    {
      int mid=(beg+end)/2;
      mergesort(a,beg,mid);
      mergesort(a,mid+1,end);
      simplemerge(a,beg,mid+1,end);
    }
}
void simplemerge(int a[],int f,int s,int t)
{
   int temp[100],i=f,j=s,k=0;
   while(i<s&&j<=t)
   {
      if(a[i]<a[j])
      {
         temp[k++]=a[i++];
      }
      else
      {
         temp[k++]=a[j++];
      }
   }
   while(i<s)
   {
      temp[k++]=a[i++];
   }
   while(j<=t)
   {
      temp[k++]=a[j++];
   }
   for(i=f,j=0;j<k;)
   {
       a[i++]=temp[j++];
   }
}
void print(int a[],int n)
{   int i;
    printf("The sorted array is :");
    for(i=0;i<n;i++)
       printf("%d ",a[i]);
}
