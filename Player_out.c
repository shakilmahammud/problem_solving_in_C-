#include <stdio.h>

int main() {
    // Write C code here
    int i,Run[101],N,K,player=0;
    
    scanf("%d %d",&N,&K);
    for(i=0;i<N;i++){
        scanf("%d",&Run[i]);
    }
    for(i=0;i<N;i++){
        if(Run[i]<K){
           player+=1;
        }
    }
    printf("%d",player);
    return 0;
}