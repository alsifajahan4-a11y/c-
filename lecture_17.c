#include<stdio.h>


// int swap(int *x,int *y){
//     int temp = *x;
//     *x=*y;
//     *y=temp;
    
// }

// int main(){
//     int x=10;
//     int y=20;
//     swap(&x,&y);
//     printf("x=%d y=%d\n", x,y);
//     return 0;
// }

// int main(){
//     int arr[4] = {1,2,3,4};
//     int *p = arr;
//     for(int i=0; i<4; i++){
//         printf("%d",*(p+i));
//     }
//     return 0;
// }

int main(){
    int arr[4] = {1,2,3,4};
    int *p = arr;
for(int i=3; i>=0; i--){
         printf("%d",*(p+i));
    }
     return 0;
 }

//2D arry

// int main(){

//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             printf("%d",arr[i][j]);
           
//         }printf(" ");
//     }
//     return 0;
// }

//sum


// int main(){
//  int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//  int sum =0;
//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             sum = sum+arr[i][j];
           
           
//         }
//         printf(" ");
//         printf("%d",sum);
//     }
//     return 0;
// }


 /*#include<stdio.h>
   int main(){
    int n;
    int primenumber=1;
    printf("enter the number:");
    scanf("%d",&n);

    if (n<=1){
        printf("prime number nhi hai");
        
    }
    for ( int i=2; i <n; i++)
    {
        if (n%i==0)
        {
            primenumber=0;
            break;
        }
    }
    if (primenumber){
            printf("primenumber  hai ");
    }else{
            printf("primenumber nhi hai");
    }
    return 0;
}*/

// #include<stdio.h>

// int main(){
//     int num=345;
//     int original;
//     int res =0;
//     while (num !=0)
//     {
//         int last0= num%10;
//         res= res*10+ last0;
//         num= num/10;
//         printf("%d \n",res);
//     }   
//     if(original=res){
//         printf("palindrommmmmm");
//     }else{
//         printf("not ");
//     }
// }

