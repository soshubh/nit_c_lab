// 5. Write a program that reads a 5×5 array of integers and then prints the row sum and the 
// column sum :
#include<stdio.h>
int rt[5],ct[5];
int main()
{
    int a[5][5];
    for(int i=0;i<5;i++)
      {
          printf("Enter row 1:");
     for(int j=0;j<5;j++)
         scanf("%d",&a[i][j]);
    //    printf("\n");  
      }
      for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
          {
              rt[i]+=a[i][j];
              ct[i]+=a[j][i];
          }
      printf("\nRow Total :");    
     for(int i=0;i<5;i++)     
     printf("%d ",rt[i]);
     printf("\nColumn Total :");
     for(int i=0;i<5;i++)
     printf("%d ",ct[i]);    
}
