#include<stdio.h>
#include<math.h>

int main (){
    
    int eng,hin,sci,marks,ave;
    
    printf("enter eng marks :");
    scanf("%d",&eng);
    
    printf("enter hin marks :");
    scanf("%d",&hin);
    
    printf("enter sci marks :");
    scanf("%d",&sci);
    
    marks=eng+hin+sci;
    if( eng>=101 || hin>=101 || sci>=101)
    {
        printf("error\n");
    }
    else
  {
      printf("total marks:%d\n",marks);
      
  }
  if (marks>=301 || eng>=101 || hin>=101 || sci>=101)
  { 
  printf("error\n");
  }
   
   else  if (marks<=100)
    {
        printf("fail\n");
       
    }
    
    else if (marks>=100 && marks<=150)
    {
        printf("grade C\n");
        
    }

   else if (marks>=150 && marks<=200)  
    {
        printf("grade B\n");
        
        }  
       else if (marks>=200 && marks<=250 )
        {
            printf("grade A\n");
        }
       else if (marks>=250 && marks<=300)
        {
            printf("grade A+\n");
        }
        
        if(marks>=301 || eng>=101 || hin>=101 || sci>=101)
        {
            printf("error\n");
        }
       else
        {
         printf("Average marks:%d\n",(eng+hin+sci)/3,ave);
        }
        return 0;
}