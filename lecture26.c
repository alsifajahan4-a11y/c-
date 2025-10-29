#include <stdio.h>
#include <string.h>
 
struct student
{
    char name[50];
    int marks;
    float RollNo;
};

int main(){
    struct student s1[5];
    for(int i=0; i<5; i++){
printf("Enter your name -");
scanf("%s",s1[i].name);
printf("enter the marks-");
scanf("%d",&s1[i].marks);
printf("Enter your RollNo-");
scanf("%f",&s1[i].RollNo);
        
    }return 0;
}
