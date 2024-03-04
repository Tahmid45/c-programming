#include<stdio.h>
#include<stdio.h>
int main(){
    int t,l;
    scanf("%d",&t);

    while(t--){
      char c[101];
      scanf("%s",c);
      l=strlen(c);
      if(l>10){
        printf("%c%d%c\n",c[0],l-2,c[l-1]);
      }
      else{
        printf("%s\n",c);
      }
    }


return 0;
}
