#include<stdio.h>
int main()
{
int n,i,key,low,high,mid,found=0;
int books[100];
printf("enter numbers of books:");
scanf("%d",&n);
printf("enter %d book IDs in ascending order:n",n);
for(i=0;i<n;i++)
scanf("%d",&books[i]);
printf("enter books ID to search:");
scanf("%d",&key);
low=0;
high=n-1;
while(low<=high)
{
mid=(low+high)/2;
if(books[mid]==key)
{
found=1;
break;
}
else if(books[mid]<key)
low=mid+1;
else
high=mid-1;
}
if(found)
printf("book is available.\n");
else
    printf("book is not available.\n");
}

