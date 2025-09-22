#include<stdio.h>

// void Bubblesort(int arr[5]){
//     int n=sizeof(arr)/sizeof(int);
//     for(int i=0;i<n-1;i++){
//     for(int j=0;j<n-i-1;j++){
//     if(arr[j]>arr[j+1]){
//         int temp=arr[j+1];
//         arr[j+1]=temp;
//     }
// }
//     }
// }
// int main(){
//     int arr[5]={5,4,3,2,1};
//     Bubblesort(arr);
//     for(int i=0;i<5;i++){
//         printf("%d",arr[i]);
//     }
//     printf("\n");
//     return 0;
// }
// int bsearch(int arr[5]){ 
//     int s=0;
//     int end = 4;
//     int t=4;
//     while(s<=end){
//         int mid = (s+end)/2;
//         if(arr[mid]==t){
//             return mid;
//         }
//         else if(arr[mid]<t){
//             end=mid+1;
//         }
//         else{
//             end=mid-1;
//         }
//     }
// }

// int main(){
//     int arr[5]={1,2,3,4,5};
//     int index=bsearch(arr);
//     printf("index =%d\n",index);
//     return 0;
// }

// int main(){
//     int x=5;
//     int *a= &x;
    

//     printf("%d",x);
//     printf("%d",&x);
//     printf("%d",a);
//     printf("%d",*a);

//     return 0;
// }

int sum(){
    int a=20;
    int b=40;
    return a+b;
}

int main(){
    int a=5;
    int b=10;
    int data= sum (&a,&b);
    printf("%d",data);
    printf("%d",a+b);
}