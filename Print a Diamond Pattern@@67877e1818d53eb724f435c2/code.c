// Your code here...
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int m=a/2 + 1;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a;j++){
            if(i==m || j==m || (i+j)%2==0){
                printf("*");
            }

            
        }
        printf("\n");
    }
    return 0;
}