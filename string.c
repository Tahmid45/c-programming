#include<stdio.h>
#include<string.h>
int main(){

    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
      }
    int min = a[0];
    int min_idx;

    int max=a[0];
    int max_idx;

    for(int i=1;i<n;i++){
        if(a[i]<min){
            min = a[i];

                }
        if(a[i]>max){
            max = a[i];

            }
    }

    a[min_idx] = max;
    a[max_idx] = min;
    for(int k=0; k<n; k++){
        printf("%d ",a[k]);
    }

    return 0;
}
