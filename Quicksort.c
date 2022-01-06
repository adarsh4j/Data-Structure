#include<stdio.h>
void quicksort(int[],int,int);
int partition(int[],int,int);
void swap(int *,int *);
int main()
{
    int n;
    printf("Enter the number of elements in an array:");
    scanf("%d",&n);
    int a[50],i;
    printf("Enter the elements of an array:");
    for(i=0;i<n;i++)
       scanf("%d",&a[i]);
    quicksort(a,0,n-1);
    printf("\nThe sorted array is : ");
    for(i=0;i<n;i++)
       printf("%d\n",a[i]);
    return 0;
}
void quicksort(int x[],int beg,int end)
{
    int j;
    if(beg<end)
    {
        j=partition(x,beg,end);
        quicksort(x,beg,j-1);
        quicksort(x,j+1,end);
    }
}
int partition(int x[],int l,int r)
{
        int key=x[l];
        int i=l+1;
        int j=r;
        do
        {
           while(x[i]<key&&i<r)
              i++;
           while(x[j]>key&&j>l)
              j--;
           if(i<j)
             swap(&x[i],&x[j]);
        }while(i<j);
        swap(&x[l],&x[j]);
        return j;
}
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

    
   

