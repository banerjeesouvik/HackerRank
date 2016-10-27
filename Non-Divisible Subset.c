#include <stdio.h>
#include<stdlib.h>
int main() {

    int n,k;
    scanf("%d %d",&n,&k);
    int *moda=(int*)calloc(k,sizeof(int));
    for(int i=0;i<n;i++){
        unsigned int num;
        scanf("%u",&num);
        moda[num%k]++;
    }
    unsigned int size=0;
    if(moda[0]>=1)
        size++;
    for(int i=1;i<=k/2;i++){
        int temp=(moda[i]>moda[k-i]?moda[i]:moda[k-i]);
        if(k%2==0 && i==k/2 && moda[k/2]>0)
            size++;
        else
            size+=temp;
    }
    printf("%u",size);
    return 0;
}
