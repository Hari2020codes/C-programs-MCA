
//disjoint set ds
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
int arr1[30], i, n, a, b, temp, arr2[30], ch;
clrscr();
printf("\n 1. create");
printf("\n 2. Union");
printf("\n 3. Find");
printf("\n 4. Exit");

while(1)
{
printf("\n Enter the choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1://create
      printf("enter no: elements\n");
      scanf("%d", &n);
      printf("enter the elements\n");
      for(i=0; i<n;i++)
      {
      scanf("%d", &arr1[i]);
      arr2[i]=i;
      }
      break;
case 2://union
       printf("enter the index of elements(2 indices) which are to be connected(union)\n");
       scanf("%d %d ", &a,&b);
       temp=arr2[a];
       for(i=0;i<n; i++)
       {
	 if(arr2[i]==temp)
	 {
	 arr2[i]=arr2[b];
	 }
       }
       printf("element status after union operation\n");
       for(i=0;i<n;i++)
       {
	printf("%d \t %d \t \n", arr1[i], arr2[i]);
	}
       printf("elements have been successfully connected\n");
       break;

   case 3: // returns true if indeces are connected
       printf("enter index of elements (2 indices) whose connection is to be checked\n");
       scanf("%d %d", &a, &b);
       if(arr2[a]==arr2[b])
       {
       printf("elements at indices %d and %d are connected\n",a,b);
       }
       else{  printf("elements at indices %d and %d are not connected\n",a,b);
	}
      break;
  case 4:
	  exit(0);
	  break;
  default:
       printf(" wrong choice, please select a valid choice");
       break;
   }
   }
   }

			 #include<stdio.h>
#include<stdlib.h>
struct node
{int key;
 struct node *left, *right;
};
struct node *newnode(int item)
{
struct node *temp=(str