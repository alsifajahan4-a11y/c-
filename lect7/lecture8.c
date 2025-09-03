#include<stdio.h>
int main(){
    int num=121;
 int original;
 
    int res =0;
    while(num !=0)
    {
        int last0= num%10;
        res= res*10+ last0;
        num= num/10;
        printf("%d \n",res);
}
if(original=res)
{
printf("polindromnm");
}else{
    printf("not");
}


}