#include<stdio.h>
int main()
{
int a[100],i,n,ch,num;
void insertion(int a[100],int n);
void bubble(int a[100],int n);
void selection(int a[100],int n);
 
  printf("entre limit");
  scanf("%d",&n);
  printf("enter n elements");
     for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  do
  {
    printf("\n 1~insertion \n 2~bubble \n 3 ~ enter choice"); 
    scanf("%d",&ch);
    switch(ch)
{
case 1:insertion(a,n);
       break;
case 2:bubble(a,n);
       break;

       
       
 default:printf("enter valid choice");
 }
 }while(ch<2);
 
 }
 
 void insertion(int a[100],int n)
 {
  int i,j,t,num;
  for(i=0;i<n;i++)
   {
    num=a[i];
    for(j=i-1;j>=0&&num<a[j];j--)
  {
   t=a[j+1];
   a[j+1]=a[j];
   a[j]=t;
   }
   }
   printf("\n sorted numbers");
    for(i=0;i<n;i++)
      printf("%d\t",a[i]);
  }
  
  void bubble(int a[100],int n)
  {
   int pass,i,t;
   for(pass=1;pass<n;pass++)
   {
    for(i=0;i<n-pass;pass++)
     {
      for(i=0;i<n;i++)
      {
       if(a[i]>a[i+1])
        {
         t=a[i];
         a[i]=a[i+1];
         a[i+1]=t;
      }
      }
      }
      printf("\n Bubble sorted no=\n");
       for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}
}
         
