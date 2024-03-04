#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int a[n];
    int x;
    int v;


    for(int j=0;j<n;j++){
        scanf("%d", &a[j]);
    }
     scanf("%d %d",&x,&v);

    for(int i=0;i<n;i++){
        if(i==x){
        a[i] = v;
        }
    }

    for(int j=n-1;j>=0;j--){
        printf("%d ",a[j]);
    }
    return 0;
}
