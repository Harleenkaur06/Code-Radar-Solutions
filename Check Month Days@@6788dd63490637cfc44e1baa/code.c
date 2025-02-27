// Your code here...
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a%2!=0){
        printf("31");
    }else if(a%2==0 && a!=2){
        printf("30");
    }else{
        printf("28");
    }
    
    


    return 0;
}