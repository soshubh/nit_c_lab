// 6. Write a program to swap two integers using call by value and call by reference methods of 
// passing arguments to a function. 
#include <stdio.h>  
int swapv(int , int);
int swapr(int*, int*);
int main()  
{  
    int a,b;
    scanf("%d %d",&a,&b);  
    printf("Before swapping the values a = %d, b = %d\n",a,b);
    swapv(a,b);  
    swapr(&a,&b);
 return 0;     
}  
int swapv (int a, int b)  
{  
    int temp;   
    temp = a;  
    a=b;  
    b=temp;  
    printf("After swapping by values a = %d, b = %d\n",a,b);
}
int swapr(int *a, int *b)  
{  
    int temp;   
    temp = *a;  
    *a=*b;  
    *b=temp;  
    printf("After swapping by reference a = %d, b = %d\n",*a,*b);
}  