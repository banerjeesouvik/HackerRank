#include <stdio.h>

int main() {

    int n,k;
    scanf("%d %d",&n,&k);
    int t[n];
    for(int i=0;i<n;i++)
        scanf("%d",&t[i]);
    int pages=0,special_prob=0;
    for(int i=0;i<n;i++){
        pages++;
        for(int j=1;j<=t[i];j++){
            if(j==pages)
                special_prob++;
            if(j%k==0 && j!=t[i])
                pages++;
        }
    }
    printf("%d",special_prob);
    return 0;
}
