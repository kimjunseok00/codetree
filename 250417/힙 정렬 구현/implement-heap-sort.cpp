#include <iostream>

using namespace std;

int n;
int arr[100001];

void heapify(int arr[],int n ,int i){
    int largest = i ;
    int left = i * 2 ;
    int right = i * 2 + 1 ;

    if(left<=n && arr[left] > arr[largest]){
        largest = left ; 
    }

    if(right<=n && arr[right] > arr[largest]){
        largest = right ; 
    }

    if(i != largest){
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
}

void heapify_sort(int arr[] , int n){
    for(int i = n/2 ; i>=1 ; i--){
        heapify(arr,n,i);
    }

    for(int i = n ; i>1 ; i--){
        swap(arr[1],arr[i]);
        heapify(arr,i-1,1);
    }
}

int main() {
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    heapify_sort(arr,n);

    for(int i=1 ; i<=n ; i++){
    cout << arr[i] << " " ;
    }
    return 0;
}
