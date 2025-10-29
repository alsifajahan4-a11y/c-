#include<stdio.h>

// int main(){
//     int letMax[6];
//     int height[6] = {5,6,0,3,5,2};
//     int rightMax[6];
//     int water = 0;
//     letMax[0] = height[0];
//     for(int i=1;i<6;i++){
//         if(height[i]>letMax[i-1]){
//             letMax[i] = height[i];
//         }else{
//             letMax[i] = letMax[i-1];
//         }
//     }
//         rightMax[5] = height[5];
//         for(int i=4;i>=0;i--){
//             if(height[i]>rightMax[i+1]){
//                 rightMax[i] = height[i];
//             }else{
//                 rightMax[i]=height[i+1];
//             }
//         }
        
//         for(int i=0;i<6;i++){
//             int minheight;
//             if(letMax[i]<rightMax[i]){
//                 minheight = letMax[i];
//             }else{
//                 minheight = rightMax[i];
//             }
//             water = water+(minheight - height[i]);
//         }
//         printf("%d",water);
         
//     }
    
//shaphat zero in the last
/*int main(){
    int arr[5] = {0,1,2,32,0};
    int j=0;
    for(int i=0;i<5;i++){
        if(arr[i]!= 0){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }
    for(int i=0;i<5;i++){
        printf("%d\n",arr[i]);
    }
    printf("%d\n",arr[j]);
}*/

