  #include<stdio.h>
int main()
{
int a[100],b[100],c[100],i,n,j,k,n1,n2,n3;
printf("enter 1st array limit");
scanf("%d",&n1);
printf("enter n numbers in sorted order");
  for(i=0;i<n1;i++)
   scanf("%d",&a[i]);
    
  printf("enter limit of 2nd array");
  scanf("%d",&n2);
  printf("enter n number of sorted array");
   for(j=0;j<n2;j++)
    scanf("%d",&b[j]);
    
    n3=n1+n2;
    i=j=k=0;
    while(i<n1&&j<n2)
    {
     if(a[i]<b[j])
      c[k++]=a[i++];
    else
      c[k++]=b[j++];
    }
    while(i<n1)
     c[k++]=a[i++];
     
    while(j<n2)
    {
     c[k++]=b[j++];
     
     }
     printf("\n merged array=");
     for(i=0;i<n3;i++)
     printf("%d",c[i]);
     }
  
