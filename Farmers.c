#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    int n;
    scanf("%d",&n);
    int a[n];

    for(int i=0;i<t;i++){
        int x;
        scanf("%d",&x);
        for(int j=0;j<n;j++){
        scanf("%d",&a[j]);

        if(a[j]==x){
           printf("YES\n");
           break;
        }
        else if(a[j]!=x){
            printf("NO\n");
            break;
            }
        }
    }

return 0;
}
