#include<stdio.h>

int missing(int arr[],int n){
    int sum = (n*(n+1))/2;
    int actualsum = 0;

    for (int i=0; i<n ; i++){
        actualsum = actualsum + arr[i];

    }
    return sum - actualsum;

}

int main(){
    int n;
    printf("Enter n");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d elements(from 0 to %d)",n,n);
    for (int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    int missing_no = missing(arr, n);
    printf("The missing number is: %d\n", missing_no);
    return 0;
}