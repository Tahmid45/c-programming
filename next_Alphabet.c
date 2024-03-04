#include<stdio.h>
int main(){
int a,b,c,m,n;
scanf("%d %d %d",&a,&b,&c);

 m=b;
 int new_m;
 int new_a = a-b;
 int new_c = c-b;
 if(new_a >= new_c/2){
   new_m = new_c/2;
 }else{
 new_m=c;
 }
 printf("%d", new_m+m);
return 0;
}
