#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX 100
//queue variables
char queue[MAX];   //queue declare
int front=-1, rear=-1;
//fn to enqueue at rear
void enqueue(char ch)
{
if(rear==MAX-1)
{
printf("queue overflow\n");
 return;
}
if(front==-1)
{ front=0;}
queue[++rear]=ch;
}

char dequeue_rear()
{
  if(rear==-1)
  {
    printf("queue underflow\n");
    return '\0';
   }
   return queue[rear--];
 }
 void main()
{
 char str[MAX], processed[MAX],reversed[MAX];
 int i, len, idx=0,k=0;
 clrscr();
 printf("enter the string\n");
 fgets(str,MAX,stdin);
 str[strcspn(str,"\n")]='\0';
 for(i=0;str[i]!='\0';i++)
 { if(!isspace((unsigned char)str[i]) )
     { processed[idx++]=tolower((unsigned char)str[i]);
     }
 }
 processed[idx]='\0';
 len=strlen(processed);
 for(i=0; i<len; i++)
 {
   enqueue(processed[i]);
  }
  while(rear!=-1)
  {
   reversed[k++]=dequeue_rear();
   }
   reversed[k]='\0';
   if(strcmp(processed,reversed)==0)
   {
    printf("palindrome\n");
    }
    else{
     printf("not palindrome\n");
     }
   getch();
 }
