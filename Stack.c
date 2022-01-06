#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int s[MAX];
int top=0;
void push(int item);
int pop();
int peek();
void display();
int main()
{
  int choice,item;
  do
  {
     printf("\n1.push\n2.pop\n3.Display top elements\n4.Display all stack\n5.Quit\n");
     printf("Enter the choice: ");
     scanf("%d",&choice);
     switch(choice)
     {
        case 1 :
               printf("\nEnter the item to be pushed: ");
               scanf("%d",&item);
               push(item);
               break;
       case 2 :
              item=pop();
              printf("\nPoped item is %d\n",item);
              break;
       case 3 :
               printf("\nitem at top is : %d\n",peek());
               break;
       case 4 :
               display();
               break;
       case 5 :
              exit(1);
              break;
       default :
                printf("\nWrong choice\n");
     }
   }while(choice!=5);
   //return 0;
}
void push(int item)
{
  if(top==MAX)
    printf("\nStack overflow");
  else
    top=top+1;
    s[top]=item;
    
}
int pop()
{
   int item;
   if(top==0)
   {
       printf("\nStack is empty");
   }
   top=top-1;
   item=s[top];
   return item;
}
int peek()
{ 
   int item;
   if(top==0)
   {
      printf("\nStack is empty");
   }
   return s[top];
}
void display()
{
    int i;
    if(top==0)
    {
      printf("\nstack is empty");
      return;
    }
    printf("\nStack element is :\n");
    for(i=top;i>0;i--)
    {
        printf("%d\n",s[i]);
        printf("\n");
    }
}
        

 
   
