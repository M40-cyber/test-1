#include <stdio.h>

int binary_search(int arr[], int left, int right, int key) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key)
            return mid;
        if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1; 
}

int main() {
    int n;
    printf("Enter a integer");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d sorted elements",n);
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int key;
    scanf("%d",&key);
    int result =binary_search(arr,0,n-1,key);
    if(result!=-1)
    printf("element %d found at index %d\n",key,result);
    else
    printf("element %d not found in array\n",key);
    return 0;

    

}      

