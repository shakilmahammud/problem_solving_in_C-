#include <stdio.h>

int main() {
    // Write C code here
   int T,A,B,C,D=0,S;
    scanf("%d",&T);
        for(int i=0;i<T;i++){
        scanf("%d %d %d %d",&S,&A,&B,&C);
            D = S-(A+B+C);
            printf("%d\n",D);
        }

    return 0;
}