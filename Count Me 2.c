#include<stdio.h>
#include<string.h>
int main(){
    char a[100001];
    scanf("%s",a);
    int l=strlen(a);
    int count=0;
    for(int i=0;i<l;i++){
    if(a[i]== 'e'){
          continue;
    }
    else if(a[i]== 'a'){
        continue;
    }
    else if(a[i]== 'i'){
       continue;
    }
    else if(a[i]== 'o'){
       continue;
    }
    else if(a[i]== 'u'){
       continue;
    }
    else{
        count++;
    }

    }
printf("%d",count);
return 0;
}
