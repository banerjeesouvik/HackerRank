#include <stdio.h>
#include <stdlib.h>

int main(){
    int n; 
    int m; 
    scanf("%d %d",&n,&m);
    int *c = malloc(sizeof(int) * m);
    for(int c_i = 0; c_i < m; c_i++){
       scanf("%d",&c[c_i]);
    }
    int *mindist=(int *)malloc(sizeof(int )*n);
    for(int i=0;i<n;i++){
        int min=99999,dist;
        for(int j=0;j<m;j++){
            dist=i>c[j]?(i-c[j]):(c[j]-i);
            if(min>dist)
                min=dist;
        }
        mindist[i]=min;
    }
    int max=mindist[0];
    for(int i=1;i<n;i++){
        if(max<mindist[i])
            max=mindist[i];
    }
    printf("%d",max);
    return 0;
}
