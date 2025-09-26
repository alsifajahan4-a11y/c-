#include<stdio.h>

// int main(){
//     int arr[5]={1,2,3,4,5};
//     int k=2;
//     int max_sum = arr[0];
//     int current_sum = arr[0];
//     for(int i=1; i<5; i++){
//         if(i<k){
//             current_sum += arr[i];
//             if(current_sum > max_sum){
//                 max_sum = current_sum;
//             }
//             continue;
//         }
//         current_sum = current_sum + arr[i] - arr[i-k];
//         if(current_sum > max_sum){
//             max_sum = current_sum;
//         }
//     }
//     printf("Max sum is: %d\n", max_sum);
//     return 0;
// }

// int main(){
//     int arr[]={1,2,3,4,5,9,7};
//     int n= sizeof(arr);
//     int k=2;
//     int wsum=0;
//     int msum=0;
//     for(int i=0; i<k; i++){
//         wsum+=arr[i];
//     }
//     msum=wsum;
//     for(int i=k; i<n; i++){
//         wsum+=arr[i]-arr[i-k];
//         if (wsum>msum){
//             msum=wsum;
//         }
//     }
//     printf("%d\n", msum);
//     return 0;
// }


// int main(){
//     int arr[]={12,-1,-7,8,-15,30,16,28};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int k=3;
//     for(int i=0; i<n-k; i++){
//         int found = 0;
//         for(int j=i; j<i+k; j++){
//             if(arr[j]<0){
//                 printf("%d ", arr[j]);
//                 found =1;
//                 break;
//             }
//         }
//         if(!found){
//             printf("0");

//         }
//     }
//     return 0;
//}


