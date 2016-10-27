#include <stdio.h>
#include <stdlib.h>

int main() {

    int n,d;
    scanf("%d %d",&n,&d);
    int *a=(int *)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++){
        scanf("%d",a+i);
    }
    int c=0;
    for(int i=0;i<n-2;i++){
        int j=i+1;
        int k=n-1;
        while(j<k){
            if((a[j]-a[i]==d)&&(a[k]-a[j]==d))
                c++,j++,k--;
            else{
                if((a[j]-a[i])!=d)
                    j++;
                else
                    k--;
            }
    }
    }
    printf("%d",c);
    return 0;
}
