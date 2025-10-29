//ex - or 
//same number = 0 
//agar alag hoi tu = 1

//find unique number
#include<stdio.h>

// int main(){
//     int arr[5] = {4,5,3,4,5};
//      int xor = 0;
//      for(int i=0;i<5;i++){
//         xor = xor^arr[i];       //4^5^3^5^4 = 3
//      }
//      printf("%d",xor);
//     return 0;
// }

// int main(){
//     int a=5;
//     int b=3;
//     int xor = a^b;
//     printf("%d",xor);
// }


// int main(){
//     int a=5;
//     int b=3;
//     a = a^b;
//     b = a^b;
//     a = a^b;
//     printf( "%d\n%d",a,b);
    
// }

//find missing number
int main(){
    int arr[4] = {1,2,4,5};
   int xor = 0;
   int xor1 = 0;
   for(int i=0;i<=5;i++){
    xor = xor^i;
   }
   for(int i=0;i<4;i++){
xor1 = xor1^arr[i];
   }
printf("%d",xor^xor1);
}