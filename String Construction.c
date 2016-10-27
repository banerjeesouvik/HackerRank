#include <stdio.h>
#include <stdlib.h>

int main(){
    int n; 
    scanf("%d",&n);
    for(int a0 = 0; a0 < n; a0++){
        char* s = (char *)malloc(10240 * sizeof(char));
        scanf("%s",s);
        int a[26]={0};
        for(int i=0;s[i]!='\0';i++){
            a[s[i]-97]++;
        }
        int cost=0;
        for(int i=0;i<26;i++){
            if(a[i]!=0)
                cost++;
        }
        printf("%d\n",cost);
    }
    return 0;
}
