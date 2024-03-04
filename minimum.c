#include <stdio.h>
#include<limits.h>
int main(){
    int mn=INT_MAX;
    int pos;
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
         scanf("%d",&a[i]);
    }
    for(int j=0;j<n;j++){
        if(a[j]<mn){
            mn = a[j];
            pos = j+1;
        }
    }

printf("%d %d\n",mn, pos);

return 0;
}
