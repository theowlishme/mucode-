#include <stdio.h>
int secondLargest(int arr[], int N)
{
    int largest=arr[0];
    int slargest=arr[0];
    int found=0;
    for (int i=1;i<=N;i++)
    {
        if (arr[i]>largest)
        {
            slargest=largest;
            largest=arr[i];
            found=1;
        }
        else if (arr[i]<largest&&arr[i]>slargest)
        {
            slargest=arr[i];
            found=1;
        }
    }

    if(found==0)
        return -1;
    return slargest;
}
int main()
{
    int num,N;
    printf("Enter number of elements: ");
    scanf("%d", &num);
    int arr[num];
    printf("Enter elements:\n");
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter index N: ");
    scanf("%d",&N);
    int result=secondLargest(arr,N);
    printf("Second largest = %d", result);
    return 0;
}
