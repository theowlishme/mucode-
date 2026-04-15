#include <stdio.h>
int secondLargest(int arr[],int N){
    int largest,slargest;
    largest=arr[0];
    slargest = -1;
    for(int i=0;i<=N;i++){
        if(arr[i]<largest && arr[i]>slargest)
            slargest=arr[i];
        else if(arr[i]>largest){
            slargest=largest;
            largest=arr[i];
        }
       
            
    }
    if(slargest == -1)
         return -1;
    return slargest;
    
}
int main() {
    int N,num;
    printf("enter the number of elements in the array ; ");
    scanf("%d",&num);
    int arr[num];
    printf("enter the elements ; ");
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the index N ;");
    scanf("%d",&N);
    int result=secondLargest(arr,N);
    printf("%d",result);
    return 0;
}
