#include <stdio.h>
int main(){
    int arr[] = {10, 7, 15, 3, 8, 11};
    int N;
    printf("enter the index till which prime numbers are needed to be checked ; ");
    scanf("%d", &N);
    for(int i=0;i<=N;i++){
        int num=arr[i];
        int isPrime=1;
        if(num<=1)
            isPrime=0;
        for (int j=2;j<num;j++){
            if(num%j==0){
                isPrime=0;
                break;
            }
        }

        if(isPrime==1)
            printf("%d ",num);
    }

    return 0;
}