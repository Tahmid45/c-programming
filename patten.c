#include<stdio.h>
int main(){
   int n=3;
   int a[n];
   for(int k=0;k<n;k++){
    scanf("%d",&a[k]);
   }
   for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++)
    if(a[i]>a[j]){
        int temp = a[i];
        a[i]=a[j];
        a[j]=temp;
    }
   }

   for(int k=0;k<n;k++){
    printf("%d\n",a[k]);
   }
return 0;
}
