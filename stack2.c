#include<stdio.h>
#include<string.h>
#define max 20
 
 struct stack
 {
  char s2[50][50];
  int top;
  }s1;
  
  void init()
  {
   s1.top=-1;
   }
    
    
    int isempty()
    {
     if(s1.top==-1)
         return 1;
      else
         return 0;
   }
   
   int isfull()
   {
    if(s1.top==max-1)
      return 1;
      
      else return 0;
      }
      
      void push(char name[20])
      {
       if(isfull())
       printf("stack is full \t Dont push");
       
       else
        {
         s1.top++;
         strcpy(s1.s2[s1.top],name);
         printf("push successful");
         }
         }
         
         void pop()
         {
          char val[20];
          if(isempty())
          printf("stack is empty \t cant pop");
          else
           {
          strcpy(val,s1.s2[s1.top]);
           s1.top--;
           printf("\n pop value=%s",val);
           }
           }
           
           void disp()
           {
           int i;
           for(i=s1.top;i>=0;i--)
           {
            printf("%s\n",s1.s2[i]);
            }
            }
            
            int main()
            {
             int ch;
             char name[20];
             init();
             
             do
             {
              printf("\n 1:push \n 2:pop \n 3 :disp\n");
              printf("enter choice");
              scanf("%d",&ch);
              
              switch(ch)
              {
               case 1:printf("enter name");
                       scanf("%s",name);
                       push(name);
                       break;
                       
               case 2:pop();break;
               case 3:disp();break;
               default:printf("invalid choice  ");
               }
               }while(ch<4);
               }
   
 
