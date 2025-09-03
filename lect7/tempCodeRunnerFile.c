#include<stdio.h>
int main(){
    int num=256;

    int res =0;
    while(num !=0)
    {
        int last0= num%10;
        res= res*10+ last0;