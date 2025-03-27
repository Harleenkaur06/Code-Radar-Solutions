// Your code here...
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int isprime=0;
    if(a>1){
        for(int i=2;i<a;i++){
            if(a%i==0){
                isprime++;
                break;
            }
        }
        if(isprime==1){
            printf("Not Prime");
        }else{
            printf("Prime")
        }
    }
    return 0;
}
