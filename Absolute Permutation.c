#include <math.h>
#include <stdio.h>

void swap(int *a,int *b){
    *a^=*b;
    *b^=*a;
    *a^=*b;
}
int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        int k; 
        scanf("%d %d",&n,&k);
        if(k==0){
            for(int i=1;i<=n;i++)
            printf("%d ",i);
            printf("\n");
        }
        else{
            int a[n];
            for(int i=0;i<n;i++)
                a[i]=i+1;
            int flag=1;
            for(int i=0;i<k && flag;i++){
                for(int j=i;j<n;j+=k*2){
                    if(j+k>=n){
                        printf("-1\n");
                        flag=0;
                        break;
                    }
                    swap(&a[j],&a[j+k]);
                }
            }
            if(flag){
            for(int i=0;i<n;i++)
                printf("%d ",a[i]);
            printf("\n");
            }
        }
    }
    return 0;
}
