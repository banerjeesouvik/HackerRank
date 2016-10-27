#include <stdio.h>
#include <stdlib.h>

int main(){
    int n; 
    int k; 
    scanf("%d %d",&n,&k);
    int *c = malloc(sizeof(int) * n);
    for(int c_i = 0; c_i < n; c_i++){
       scanf("%d",&c[c_i]);
    }
    int i=0;
    int power=100;
    while((i+k)%n!=0){
        i+=k;
        if(c[i]==0)
            power--;
        else
            power-=3;
    }
    if(c[0]==0)
        power--;
    else
        power-=3;
    printf("%d",power);
    return 0;
}
