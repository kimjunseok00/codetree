#include <iostream>

using namespace std;

int n;
int arr[100000];

void bubble_sort(int arr[],int low,int high){
    if (low < high){
        int min = (low + high) / 2 ;
        bubble_sort(arr,low,mid);
        bubble_sort(arr,mid+1,high);
        bubble(arr,low,mid,high);
    }
    int bubble_sort arr = [];
}
void bubble(int arr[],int low,int mid,int high){
    int i = low , j = mid + 1;

    int k = low ;
    while(i<=mid&j<=high){
        if (arr[i]<=arr[j]){
            bubble_arr[k] = arr[i];
            k++ ,i++;
            }
        else{
            bubble_arr[k] = arr[j] ;
            k++ , j++;
        }
     }

    while(i<=mid){
        metged_arr[k] = arr[i];
        k++,i++;
    }
    
    while(j<=mid){
        metged_arr[k] = arr[j];
        k++,j++;
    }
    for (int k=low ; k<=high ; k++){
        arr[k] = bubble_arr[k] ;
    }
}


int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    bubble(arr[],n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    // Please write your code here.

    return 0;
}
