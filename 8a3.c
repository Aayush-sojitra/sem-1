#include <stdio.h>

void main() {
    int start,end;
    scanf("%d %d",&start,&end);
    if(start%2!=0){
        start++;
    }
    while(start<=end){
        printf("%3d",start);
        start+=2;
    }
}
