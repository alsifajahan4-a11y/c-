
#include <stdio.h>
#include <string.h>
// int main()
// {
//     int arr[6]={1,2,4,6,9,5};
//     int i=0, j=8;
//     int max=0;
//     while (i<j)
//     {
//         int h;
//         if(arr[i]<arr[j])
//         {
//             h=arr[i];
//         }
//         else{
//             h=arr[j];
//         }
//         int w=j-i;
//         int area=h*w;
//         if(area>max)
//         {
//             max=area;
//         }
//         if(arr[i]<arr[j])
//         {
//             i++;
//         }
//         else{
//             i--;
//         }
//     }

//    printf("%d",max);
//    return 0;
// }

// struct student
// {
//     char name[50];
//     int RollNo;
//     int age;
// };

// int main()
// {
//     struct student s1;
//     s1.age = 20;
//     printf("%d", s1.age);
//     return 0;
// }


struct addressess
{
     int pinCode;
};

struct student
{
    char name[50];
    int RollNo;
    int age;  
    struct  addressess s2;
};
 int main(){
     struct  student s1;
     s1.age=15;
     s1.s2.pinCode=48110;

     strcpy(s1.name,"hello");
     printf("%d", s1.s2.pinCode);
     
 }