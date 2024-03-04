#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int pos, neg, z;
    for(int j=0;j<n;j++){
        if(a[j]>0){
            pos=pos+1;
        }
        else if(a[j]<0){
            neg = neg+1;
        }
        else if(a[j]==0){
            z=z+1;
        }
    }

   float v = pos/n;
   float b= neg/n;
   float c = z/n;
    printf("%.6f\n %.6f\n %.6f\n",v,b,c );

}
