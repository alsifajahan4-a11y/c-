/*#include<stdio.h>

int main(){
for(int i=0; i <=4; i++){
    for(int j=0; j<=4; j++){
        if(i==j || j==(4-i))
        {
        printf("*");
        }else{
            printf(" ");
        }
    }
    printf("/n");
}
}*/

/*#include<stdio.h>

int main(){
    sum();
}
int sum(){
    int a=10;
    int b=18;
    int c;
    c=a+b;
    printf("%d",c);
    return 0;
}*/
    


//parameter code //
/*#include<stdio.h>

int sum(int a, int b){
printf("%d",a+b);
}
int main(){
    sum(5,10);
    return 0;
}*/


//odd/even code //

/*int a;
int odd_even(){
    scanf("%d",&a);
    if (a%2==0)
    {
       printf("even");
    }
    else{
        printf("odd");
    }
    
}
int main(){
    odd_even();
    return 0;
}*/

/*#include<stdio.h>

int sum(){
    int a=5;
    int b=10;
    int c=a+b;
    return c;
}
int main(){
    int data= sum();
    printf("%d",data);
}*/

//magic no//

#include<stdio.h>

int main(){
    int sum;
for (int i = 1; i <=4; i++)
{
    sum=sum++;
   printf("%d",sum++);

}
}