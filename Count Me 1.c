#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int two=0;
    int thr = 0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0 && a[i]%3==0){
            two++;
        }
        else if(a[i]%2==0){
            two++;
        }
        else if(a[i]%3==0){
            thr++;
        }
    }
    printf("%d %d",two,thr);

return 0;
}
