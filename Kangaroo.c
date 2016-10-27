#include <stdio.h>

int main(){
    int x1; 
    int v1; 
    int x2; 
    int v2; 
    scanf("%d %d %d %d",&x1,&v1,&x2,&v2);
    if(v2>=v1)
        printf("NO");
    else if((x2-x1)%(v1-v2)==0)
        printf("YES");
        else
        printf("NO");
    return 0;
}
