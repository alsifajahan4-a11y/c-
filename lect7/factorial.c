#include<stdio.h>
int main()
{
    int n,i;

   int factorial=1;
   printf("Enter a non-negative:");
   scanf("%d",&n);

   if(n<0){
    printf("Factorial is not defined for negative number.\n");
    }else{
        for(i=1; i<=n;i++){
            factorial *=i;
        }
        printf("Factorial of %d is \n",factorial);
    }
return 0;
   }
