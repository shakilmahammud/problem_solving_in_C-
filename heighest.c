#include<stdio.h>

int main(){
int N,Marks[101],highest=0,difference=0;
    
    scanf("%d",&N);
    for(int i = 0; i<N;i++){
        scanf("%d",&Marks[i]);
    }
    for(int i =0;i<N;i++){
        if(highest < Marks[i]){
            highest = Marks[i];
        }
    }
     for(int i = 0; i<N;i++){
          difference =( highest - Marks[i]);
          printf("%d ",difference);
      }
    return 0;
}