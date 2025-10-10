#include<stdio.h>
#include<stdlib.h>
struct node
{
int info;
struct node *ptr;
}*top,*temp,*top1;
int topelement();
void push(int data);
void pop();
void empty();
void display();
void stackcount();
int count=0;
void destroy();
void create();

void main()
{ int no,ch,e;
clrscr();
printf("\n 1. push\n 2. pop\n 3. top \n 4. empty\n 5. exit \n 6.display\n 7. stack count\n 8. destroy\n");
create();
while(1)
{printf("enter the choice\n");
  scanf("%d",&ch);
  switch(ch)
  {
  case 1:
	 printf("enter the data\n");
	 scanf("%d",&no);
	 push(no);
	 break;
  case 2:
	 pop();
	 break;
  case 3:if(top==NULL)
	  {
	    printf("stack is empty\n");
	  }
	  else{
	       e=topelement();
	       printf("top element in the stack is %d\n",e);
	       }
	 break;
  case 4:
	 empty();
	 break;
  case 5:
	 exit(0);
  case 6:
	 display();
	 break;
  case 7:
	  stackcount();
	  break;
  case 8:
	  destroy();
	  break;
  default:
	  printf("the choice is invalid");
	  break;
   }

}


}

   void create()
   {
     top=NULL;
   }
   int topelement()
   {
   return(top->info);
   }
   void push(int data)
   {
     if(top==NULL)
     {
      top=(struct node*)malloc(sizeof(struct node));
      top->ptr=NULL;
      top->info=data;
      }
      else {
	      temp=(struct node*)malloc(sizeof(struct node));
	      temp->ptr=top;
	      temp->info=data;
	      top=temp;
	      }
	      count++;
	  }

      void pop()
      {
      top1=top;
      if(top1==NULL)
	{
	  printf("\n error trying to pop from empty stack\n");
	  return ;
	  }
	  else{
		top1=top->ptr;
		printf("popped value = %d \n",top->info);
		free(top);
		top=top1;
		count--;
		}
		}


	void stackcount()
	{
	  printf(" the number of elements in stack = %d \n", count);
	  }


	  void display()
	  { top1=top;
	    if(top1==NULL)
	    {printf("stack is empty\n");
	    return;
	    }
	    printf("stack elements are \n");
	    while(top1!=NULL)
	    {
	    printf("%d \n", top1->info);
	    top1=top1->ptr;
	    }

	}

	void empty()
	{
	  if(top==NULL)
	  {
	    printf(" stack is empty\n");
	    }
	    else{
		printf("stack is not empty and contains %d elements \n", count);
	       }
	  }
	  void destroy()
	  {
	     top1=top;
	     while(top!=NULL)
	     {
	     top=top->ptr;
	     free(top);
	     top=top1;
	     top1=top1->ptr;
	     }
	     free(top1);
	     top=NULL;
	     printf("all stack elements are destroyed\n");
	     count=0;
	     }

