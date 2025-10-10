
//set data structure operations
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
int set1[30], set2[30],s1,s2,uni[30],inter[30],diff[30], i, ch;
clrscr();
printf("enter no: elements in set1:\n");
scanf("%d",&s1);
printf("enter the elements in set1(only 0s and 1s):\n");
for(i=0; i<s1; i++)
{
scanf("%d", &set1[i]);
}
printf("enter the elements in set2:\n");
scanf("%d",&s2);
printf("enter the elements in set2 (only 0s and 1s)\n");
for(i=0;i<s2;i++)
{
scanf("%d",&set2[i]);
}
printf("\n 1. UNION");
printf("\n 2. INTERSECTION");
printf("\n 3. DIFFERENCE");
printf("\n 4. EXIT");
while(1)
{
printf("\n Enter the choice");
scanf("%d",&ch);
switch(ch)
{
case 1://Union
    if(s1==s2)
    {
     printf("\n Elements after union operation");
     for(i=0;i<s1; i++)
     {
     uni[i]=set1[i]|set2[i];
     printf("%d ", uni[i]);
     }
    }
    else{
    printf("set union is not possible as sets are of differem]nt size\n");
    }
    break;
  case 2://intersection
       if(s1==s2)
       {
	printf(" \n elements after intersection operation");
	for(i=0; i<s1; i++)
	{
	inter[i]=set1[i]&set2[i];
	printf("%d",inter[i]);
	}
       }
       else{
	   printf(" set inter section is not possible as sets are of different size\n");
	   }
	break;
  case 3://difference
	 if(s1==s2)
	 { printf("the elements after difference operation");
	 for(i=0; i<s1; i++)
	  {
	 diff[i]=set1[i] &~ set2[i];
	 printf("%d", diff[i]);
	  }
	 }
	 else{
	   printf("set difference is not possible as sets are of different size\n");
	   }
       break;
 case 4:
      exit(0);
      break;
default:
     printf("wrong choice, please enter a valid choice");
     break;
    }
  }
}