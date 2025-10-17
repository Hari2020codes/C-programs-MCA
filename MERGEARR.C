#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],b[10],c[10], i ,  k=0, n, m;
clrscr();
printf("enter the size of 1st array");
scanf("%d", &n);
printf("enter the elements\n") ;
for(i=0;i<n;i++)
{  scanf("%d",&a[i]);
   c[k]=a[i];
   k++;
}

printf("enter the size of 2nd array");
scanf("%d", &m);
printf("enter the elements\n")  ;
 for(i=0;i<m;i++)
{  scanf("%d",&b[i]);
   c[k]=b[i];
   k++;
}
printf("the merged array :\n");
for(i=0;i<k;i++)
{
    printf(" %d",c[i]);
}
getch();
}

