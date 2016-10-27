#include <stdio.h>
#include <stdlib.h>

int main(){
    int n; 
    scanf("%d",&n);
    char* B = (char *)malloc(10240 * sizeof(char));
    scanf("%s",B);
    int c=0;
    for(int i=0;i<n-2;i++){
        if(B[i]=='0' && B[i+1]=='1' && B[i+2]=='0')
            c++,i+=2;
    }
    printf("%d",c);
    return 0;
}
