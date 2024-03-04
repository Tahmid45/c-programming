#include<stdio.h>
int main(){
    int n,m;
    int a[n];
    int c[m+1]={0};
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(int i=1;i<=m;i++){
        c[i]++;
        printf("%d : %d\n",i,c[i]);
    }
return 0;
}
