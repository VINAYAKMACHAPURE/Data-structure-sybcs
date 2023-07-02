#include<stdio.h>
#include<string.h>
int main()
{
 char s[100][100],city[20];
 int i,flag=0,top,mid,bottom,n;
 printf("enter limit");
 scanf("%d",&n);
 printf("enter n city names");
 for(i=0;i<n;i++)
 {
 scanf("%s",s[i]);
 }
 printf("enter city to search");
 scanf("%s",city);
 
 top=0;
 bottom=n-1;
 while(top<=bottom)
 {
  mid=(top+bottom)/2;
  if(strcmp(s[mid],city)==0)
  {
   flag=1; break;
  }
  if(strcmp(s[mid],city)<0)
    top=mid+1;
    else
     bottom=mid-1;
 }
 if(flag==1)
 printf("city not found");
 else
 printf("city found");
 }
    
    
    
    
    
    
    
    
    
    
  
 
