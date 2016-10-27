#include <stdio.h>
#include <stdlib.h>

int main(){
    int N; 
    scanf("%d",&N);
    int *B = (int *)malloc(sizeof(int) * N);
    for(int B_i = 0; B_i < N; B_i++){
       scanf("%d",&B[B_i]);
    }
    int c=0;
    for(int i=0;i<N;i++){
        if(B[i]%2!=0){
            c++;
        }
    }
    if(c%2!=0)
        printf("NO");
    else{
        int temp=1,i=0;
        c=0;
        while(temp){
            temp=0;
            for(;i<N-1;i++){
                if(B[i]%2!=0){
                    temp=1;
                    break;
                }
            }
            if(temp){
             B[i]++;
             B[i+1]++;
             c+=2;
            }
        }
        printf("%d",c);
    }
    return 0;
}
