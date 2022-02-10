#include<stdio.h>
typedef struct
{
  int coeff;
  int exp1;
  int exp2;
  int exp3;
}terms;
void main()
{
  int i,n;
  printf("Enter the number of terms:");
  scanf("%d",&n);
  terms poly[n];
  for(i=0;i<n;i++)
  {
     
     printf("Enter the coeffient of term %d: ",i+1);
     scanf("%d",&poly[i].coeff);
     printf("Enter the exponential of x in term %d: ",i+1);
     scanf("%d",&poly[i].exp1);
     printf("Enter the exponential of y in term %d: ",i+1);
     scanf("%d",&poly[i].exp2);
     printf("Enter the exponential of z in term %d: ",i+1);
     scanf("%d",&poly[i].exp3);
  }
  printf("Polynominal is ");
  for(i=0;i<n;i++)
  {
      printf("(%dx^%d+y^%d+z^%d)",poly[i].coeff,poly[i].exp1,poly[i].exp2,poly[i].exp3);
      if(i!=n-1)
        printf("+");
  }
}
