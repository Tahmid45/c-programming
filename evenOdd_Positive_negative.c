#include<stdio.h>
int main(){
    int n;
    scanf("&d",&n);
    for(int i=1; i<=n; i++){
        int a;
        scanf("%d",&a);
        if(a%2==0){
            printf("Even:%d\n",i);
        }
        else{
            printf("Odd:%d\n",i);
        }
        if(a<0){
            printf("Positive:%d\n",i);
        }
        else{
            printf("Negative:%d\n",i);
        }
    }
     return 0;
}
