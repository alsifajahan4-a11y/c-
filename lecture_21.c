#include <stdio.h>
#include<string.h>

//int main()
// {
//     char name[] = "hii";
//     int i = 0;

//    while (name[i] ! = '\0')
// {
//      printf("%c\n",name[i]);
//        i++;
//  }
//     return 0;
// }


// int main()
// {
// char name[] = "hii";
// for(int i=0; name[i] !="\0" ; i++){
//     printf("%c",name[i]);
// }
// return 0;
// }


// int main(){
//     char name[] = "hii";
//     char data[10];
//     for(int i=0; name[i] != '\0'; i++)
//     {
// data[i] = name[i];
//     }
//     printf("%s",data);
//     return 0;
// }

int main(){
    char name[] = "madam";
    int ln = strlen(name);
    int isTrue = 1;
    for(int i=0; i<ln/2; i++){
        if(name[i]!=name[ln-i-1])
        {
      isTrue=0;
      break;
        }
    }
    if(isTrue==1){
        printf("palindrom haii");
    }
    else{
        printf("nahi hai");
    }
    return 0;
}