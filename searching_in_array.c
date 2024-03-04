#include<stdio.h>
int main(){
    int n;

    int ans =-1;
    scanf("%d", &n);


    int a[n];
    for(int i=0; i<n;i++){
        scanf("%d", &a[i]);
        }
    int x;
    scanf("%d", &x);
    for(int j=0;j<n;j++){
        if(a[j]==x){
            ans = j;
        break;
        }

    }
    printf("%d\n",ans);
     return 0;
}
