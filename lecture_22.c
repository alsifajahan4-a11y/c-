#include<stdio.h>
#include<string.h>

int main(){

    char str[] = "hello";
    int ln = strlen(str);

    for(int i=0; i<ln; i++){
         int count = 0;
        for(int j=i+1; j<ln; j++){
            if(str[i]==str[j]){
                count++;
            }
        }
        if(count==0)
        {
            printf("%c",str[i]);
        }
    }
    return 0;
}

// int main(){
//     char str[] = "hii";
//     int ln = strlen(str);

//     for(int i=0; i<ln; i++){
//          int count = 0;
//         for(int j=0; j<i; j++){
//             if(str[i]==str[j]){
//                 count++;
//             }
//         }
//         if(count==0)
//         {
//             printf("%c",str[i]);
//         }
//     }
//     return 0;
// }
//#include <stdio.h>
//#include <string.h>

// int main()
// {
//     char str[] = "aeioubvs";
//     int ln = strlen(str);

//     for (int i = 0; i < ln; i++)
//     {
//         int count = 0;
//         for (int j = i + 1; j < ln; j++)
//         {
//             if (str[i] == str[j])
//             {
//                 count++;
//             }
//         }
//         if (count == 0)
//         {
//             if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
//             {
//                 printf("%c ", str[i]);
//             }
//         }
//     }
//     return 0;
// }

