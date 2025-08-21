#include<stdio.h>

void bubblesort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int swapped = 0;
        for (int j= 0; j<n-i-1; j++){
         if (arr[j] > arr[j+1]){
            int temp = arr[j];
            arr[j]= arr[j+1];
            arr[j+1] = temp;
            swapped = 1;
         }
        }
        if (swapped == 0)
        break ; 
    }
}

int main(){
    int arr[] = {25,26,27,28,29,30};
    int n = sizeof(arr)/ sizeof(arr[0]);
    bubblesort(arr, n );
    printf("sorted arr:");
    for (int i=0; i < n ; i++){
         printf("%d ",arr[i]);}
    return 0;

}
