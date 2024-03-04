#include<stdio.h>
#include<string.h>

int main(){
    char a[11];
    char b[11];
    scanf("%s %s",a,b);
    int ln1=strlen(a);
    int ln2 = strlen(b);
    printf("%d %d\n",ln1,ln2);
    int t=ln1+ln2;
    char d[t];
    int j=0;
    for(int i=0;i<ln1;i++){
        d[i] = a[j];
        j++;
        printf("%c",d[i]);
    }
    int k=0;
    for(int i=ln1;i<t;i++){
        d[i]=b[k];
        k++;
        printf("%c",d[i]);
    }
    printf("\n");
    char temp;
    temp = a[0];
    a[0] =  b[0];
    b[0] = temp;
    printf("%s %s",a,b);

}
