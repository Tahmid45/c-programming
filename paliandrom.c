#include<stdio.h>
#include<string.h>
int main(){
    char s[1001];
    scanf("%s",s);
    int l=strlen(s);

    int j=l-1;
    int i=0;
    int k=0;
    while(i<j){
        if(s[i]!=s[j]){
            k=10;
            break;
        }
        j--;
        i++;
    }
     if(k==10){
        printf("NO");
     }else if(k==0){
     printf("YES");
     }
return 0;

}
