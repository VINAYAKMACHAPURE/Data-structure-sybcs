#include<stdio.h>
int main()
{
  struct student
  {
    int rno;
    char name[20];
    int per;
  }s1[100],t;
    
    int i,n,pass;
    printf("enter limit");
    scanf("%d",&n);
    printf("enter student information");
      for(i=0;i<n;i++)
       {
         printf("\tenter rno name per");
         scanf("%d%s%d",&s1[i].rno,s1[i].name,&s1[i].per);
       }
         for(pass=1;pass<n;pass++)
         {
           for(i=0;i<n-pass;i++)
            {
              if(s1[i].per<s1[i+1].per)
               {
                 t=s1[i];
                 s1[i]=s1[i+1];
                  s1[i+1]=t;
               }
          }
       }
       
        printf("\n Display student info \n");
         for(i=0;i<n;i++)
          {
                printf("\n%d\t%s\t%d",s1[i].rno,s1[i].name,s1[i].per);
          }
        }
